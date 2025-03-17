#ifndef NGC_UTILS_FILEREADER_H
#define NGC_UTILS_FILEREADER_H

#include <string>
#include <vector>
#include <expected>
#include <filesystem>
#include <system_error>

namespace ngc::utils {

class FileReader {
public:
    // Lê o conteúdo de um arquivo e retorna como uma string
    static std::expected<std::string, std::error_code> readFileToString(const std::filesystem::path& filePath);

    // Lê o conteúdo de um arquivo e retorna como um vetor de strings (uma por linha)
    static std::expected<std::vector<std::string>, std::error_code> readFileToLines(const std::filesystem::path& filePath);
};

} // namespace ngc::utils

#endif // NGC_UTILS_FILEREADER_H