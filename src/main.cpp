#include <iostream>
#include "core/utils/FilePrinter.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << std::format("Uso: {} <arquivo_de_entrada>\n", argv[0]);
        return 1;
    }

    std::filesystem::path filePath = argv[1];

    // Exibe o conteúdo completo do arquivo
    ngc::utils::FilePrinter::printFileContent(filePath);

    // Exibe o conteúdo do arquivo linha por linha
    ngc::utils::FilePrinter::printFileLines(filePath);

    return 0;
}