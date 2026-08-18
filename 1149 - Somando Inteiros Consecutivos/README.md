# 1149 - Somando Inteiros Consecutivos

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1149

## Descricao

Le um valor A e um valor N. Imprime a soma de A com cada i, para i de 0 ate N-1, ou seja (A+0) + (A+1) + ... + (A+N-1). Enquanto N for negativo ou zero, le um novo N.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Le A e N na primeira linha. Valida N: enquanto for menor ou igual a zero, le outro valor (apenas para N). Depois acumula a soma de A+i para i de 0 a N-1. Usa tipos longos pois a soma pode ser grande.

## Java vs C vs C++ vs Python

Java usa `long`, C++ usa `long long` para a soma. Python lida nativamente com inteiros grandes. A validacao de N e o laco de soma sao iguais nos tres. Em C uso long long e revalido N com scanf ate ser positivo.
