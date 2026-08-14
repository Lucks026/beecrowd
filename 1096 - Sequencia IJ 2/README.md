# 1096 - Sequencia IJ 2

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1096

## Descricao

Imprime uma sequencia de pares I/J onde I assume os valores impares de 1 a 9 e, para cada I, J vai de 7 a 5 decrescendo de 1 em 1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loops aninhados. Externo: I de 1 a 9 com passo 2 (so impares). Interno: J de 7 a 5 com passo -1. A saida tem 15 linhas no total (5 valores de I x 3 valores de J).

## Java vs C vs C++ vs Python

Identico nos tres. Java e C++ usam `for(int i = 1; i <= 9; i += 2)` e `for(int j = 7; j >= 5; j--)`. Python usa `range(1, 10, 2)` e `range(7, 4, -1)`. Em C, dois lacos aninhados com printf.
