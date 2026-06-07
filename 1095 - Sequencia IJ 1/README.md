# 1095 - Sequencia IJ 1

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1095

## Descricao

Imprime uma sequencia de pares I/J onde I comeca em 1 e cresce de 3 em 3, enquanto J comeca em 60 e diminui de 5 em 5. Continua enquanto J for maior ou igual a zero.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop while com condicao `j >= 0`. A cada iteracao imprime no formato "I=valor J=valor", soma 3 em I e subtrai 5 de J. Termina quando J fica negativo.

## Java vs C++ vs Python

Identico nos tres. Mesma estrutura de loop while com duas variaveis. Java usa concatenacao, C++ usa `cout` encadeado, Python usa f-string.
