#include <iostream>
#include "FilePrinter.h"
#include "FileReader.h"

namespace ngc::utils {

void FilePrinter::printFileContent(const std::filesystem::path& filePath) {
    auto result = FileReader::readFileToString(filePath);
    if (!result) {
        std::cerr << std::format("Erro ao ler o arquivo: {}\n", result.error().message());
        return;
    }
    std::cout << std::format("Conteúdo do arquivo:\n{}\n", *result);
}

void FilePrinter::printFileLines(const std::filesystem::path& filePath) {
    auto result = FileReader::readFileToLines(filePath);
    if (!result) {
        std::cerr << std::format("Erro ao ler o arquivo: {}\n", result.error().message());
        return;
    }
    std::cout << "\nLinhas do arquivo:\n";
    for (const auto& line : *result) {
        std::cout << std::format("> {}\n", line);
    }
}

} // namespace ngc::utils