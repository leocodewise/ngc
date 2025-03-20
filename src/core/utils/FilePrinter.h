#ifndef NGC_UTILS_FILEPRINTER_H
#define NGC_UTILS_FILEPRINTER_H

#include <filesystem>
#include <string>
#include <vector>
#include <format>

namespace ngc::utils {

class FilePrinter {
public:
    // Exibe o conteúdo de um arquivo como uma string
    static void printFileContent(const std::filesystem::path& filePath);

    // Exibe o conteúdo de um arquivo linha por linha
    static void printFileLines(const std::filesystem::path& filePath);
};

} // namespace ngc::utils

#endif // NGC_UTILS_FILEPRINTER_H