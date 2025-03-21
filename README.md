# ngc - Um Compilador Moderno e Flexível

[![Licence](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](./license.txt)
[![Documentation](https://img.shields.io/badge/docs-available-brightgreen)](docs/README.md)
<!--
[![Build Status](https://github.com/seu-usuario/ngc/actions/workflows/build.yml/badge.svg)](https://github.com/seu-usuario/ngc/actions)
-->

O **ngc** é um compilador moderno e flexível, projetado para suportar múltiplas linguagens de programação (como ngm++, d++, C, C++, etc.) e múltiplas arquiteturas de hardware (como ARM32, x86_64, etc.). Ele é altamente modular e extensível, permitindo que novas linguagens e arquiteturas sejam adicionadas sem modificar o núcleo do compilador.

Além de compilar código, o ngc inclui a ferramenta ngmake, que permite automatizar tarefas como compilação, execução de testes e geração de documentação, usando scripts escritos em ngm.

## Funcionalidades

- **Lexer Flexível**: Adapta-se às regras de tokenização de cada linguagem.
- **Linguagem Intermediária Flexível**: Gera código intermediário que se adapta às regras de cada arquitetura.
- **Suporte a Múltiplas Linguagens**: Inclui suporte para `ngm++`, `d++`, C, C++ e outras.
- **Suporte a Múltiplas Arquiteturas**: Gera código para ARM32, x86_64 e outras.
- **Ferramenta de Automação Integrada**: Use `ngmake` para automatizar tarefas como compilação e testes.
- **Extensível**: Adicione novas linguagens e targets através de arquivos de configuração.

## Como Usar

Compilando um Arquivo
Para compilar um arquivo de código-fonte, use o comando:
```bash
./ngc file
```

Instalando Ferramentas Adicionais:
Para instalar a ferramenta ngmake, use o comando:

```bash
ngc install-ngmake
```
### Instalação

1. Clone o repositório:
```bash
   git clone https://github.com/leocodewise/ngc.git
   cd ngc
   ./compiler
```
<!--
| Service | Status |
| ------- | ------ |
| [GitHub actions](https://github.com/g-truc/glm/actions)| [![.github/workflows/ci.yml](https://github.com/g-truc/glm/actions/workflows/ci.yml/badge.svg)](https://github.com/g-truc/glm/actions/workflows/ci.yml)
-->

## Licença
O projeto ngc é distribuído sob a licença BSD-3-Clause. Veja o arquivo [license.txt](./license.txt) para mais detalhes.

[![Licence](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](./license.txt)
<hr>
