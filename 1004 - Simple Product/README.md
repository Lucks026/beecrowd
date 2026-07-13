# 1004 - Simple Product

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1004

## Descricao

Le dois inteiros e imprime o produto no formato "PROD = valor".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Multiplicacao direta. Usei long/long long por precaucao contra overflow em valores grandes.

## Java vs C vs C++ vs Python

Em C, `long long` com `%lld` no scanf/printf. Long em Java e long long em C++ pra cobrir valores grandes. Python nao tem limite de inteiro, entao nao precisa se preocupar com overflow.
