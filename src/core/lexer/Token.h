#ifndef TOKEN_H
#define TOKEN_H

#include <string>

// Enumeração para os tipos de tokens
enum class TokenType {
    IDENTIFIER,  // Nomes de variáveis, funções, etc.
    NUMBER,      // Números literais
    KEYWORD,     // Palavras-chave (if, else, while, etc.)
    OPERATOR,    // Operadores (+, -, *, /, etc.)
    PUNCTUATION, // Pontuação (;, {}, (), etc.)
    END_OF_FILE  // Fim do arquivo
};

// Estrutura que representa um token
struct Token {
    TokenType type;       // Tipo do token
    std::string value;    // Valor do token (lexema)
    int line;             // Linha onde o token foi encontrado
    int column;           // Coluna onde o token foi encontrado

    // Construtor - Token(TokenType type, const std::string& value, int line, int column);
    Token(TokenType type, const std::string& value, int line, int column)
        : type(type), value(value), line(line), column(column) {}

    // Método para converter o token em uma string - std::string toString() const;
    std::string toString() const {
        return "Token: " + value + " | Type: " + std::to_string(static_cast<int>(type))
               + " | Line: " + std::to_string(line) + " | Column: " + std::to_string(column);
    }
};

#endif // TOKEN_H