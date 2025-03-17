#include <iostream>
#include <format>
#include "core/utils/FileReader.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << std::format("Uso: {} <arquivo_de_entrada>\n", argv[0]);
        return 1;
    }

    std::filesystem::path filePath = argv[1];

    auto result = ngc::utils::FileReader::readFileToString(filePath);
    if (!result) {
        std::cerr << std::format("Erro ao ler o arquivo: {}\n", result.error().message());
        return 1;
    }

    std::cout << std::format("Conteúdo do arquivo:\n{}\n", *result);

    auto linesResult = ngc::utils::FileReader::readFileToLines(filePath);
    if (!linesResult) {
        std::cerr << std::format("Erro ao ler o arquivo: {}\n", linesResult.error().message());
        return 1;
    }

    std::cout << "\nLinhas do arquivo:\n";
    for (const auto& line : *linesResult) {
        std::cout << std::format("> {}\n", line);
    }

    return 0;
}