# 1066 - Even Odd Positive and Negative

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1066

## Descricao

Le 5 inteiros e conta quantos sao pares, impares, positivos e negativos.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Dentro do loop, cada numero passa por duas checagens: par/impar (com modulo) e positivo/negativo (com > 0 e < 0). Zero conta como par mas nao eh positivo nem negativo.

## Java vs C vs C++ vs Python

Identico em estrutura nos tres. Quatro contadores, um loop, duas verificacoes por iteracao. Python usa += 1 em vez de ++. Em C, quatro contadores e scanf, igual aos outros.
