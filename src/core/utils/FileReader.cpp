#include "FileReader.h"
#include <fstream>
#include <sstream>

namespace ngc::utils {

std::expected<std::string, std::error_code> FileReader::readFileToString(const std::filesystem::path& filePath) {
    if (!std::filesystem::exists(filePath)) {
        return std::unexpected(std::make_error_code(std::errc::no_such_file_or_directory));
    }

    std::ifstream file(filePath);
    if (!file.is_open()) {
        return std::unexpected(std::make_error_code(std::errc::io_error));
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

std::expected<std::vector<std::string>, std::error_code> FileReader::readFileToLines(const std::filesystem::path& filePath) {
    if (!std::filesystem::exists(filePath)) {
        return std::unexpected(std::make_error_code(std::errc::no_such_file_or_directory));
    }

    std::ifstream file(filePath);
    if (!file.is_open()) {
        return std::unexpected(std::make_error_code(std::errc::io_error));
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(std::move(line));
    }

    return lines;
}

} // namespace ngc::utils