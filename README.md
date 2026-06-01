# ft_printf

Repositório com a implementação da função `printf` da biblioteca padrão em C.

## Sobre

O projeto **ft_printf** consiste em recriar a função `printf` da biblioteca padrão da linguagem C, com o objetivo de compreender melhor o funcionamento de funções variádicas, formatação de strings e manipulação de diferentes tipos de dados.

Este projeto faz parte do currículo da 42 e tem como foco o desenvolvimento de uma implementação robusta e modular.

## Conteúdo

- Implementação da função `ft_printf`
- Manipulação de funções variádicas (`stdarg.h`)
- Conversão e impressão de diferentes tipos:
  - char
  - string
  - pointer
  - int / unsigned int
  - hexadecimal (lowercase / uppercase)
- Gestão de formatação de output

## Funcionalidades

A função suporta os seguintes especificadores:

- `%c` — Caractere
- `%s` — String
- `%p` — Pointer
- `%d` — Inteiro com sinal
- `%i` — Inteiro
- `%u` — Inteiro sem sinal
- `%x` — Hexadecimal (minúsculas)
- `%X` — Hexadecimal (maiúsculas)
- `%%` — Percentagem

## Objetivos

- Compreender funções variádicas
- Reproduzir comportamento da função `printf`
- Melhorar lógica de manipulação de strings
- Aprender gestão de tipos e conversões em C
- Desenvolver código modular e reutilizável

## Estrutura

```text
.
├── ft_printf.c
├── ft_printf_utils.c
├── ft_printf.h
├── Makefile
└── ...
```

## Compilação

```bash
make
```

Limpar objetos:

```bash
make clean
```

Remover tudo:

```bash
make fclean
```

Recompilar:

```bash
make re
```
