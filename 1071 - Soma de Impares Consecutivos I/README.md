# 1071 - Soma de Impares Consecutivos I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1071

## Descricao

Le dois valores inteiros X e Y e imprime a soma de todos os numeros impares estritamente entre eles (exclusivo).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Primeiro ordena X e Y para garantir que X < Y. Depois percorre todos os numeros de X+1 ate Y-1 (exclusivo nas pontas), somando apenas os impares (verificados com modulo 2).

## Java vs C++ vs Python

Java faz swap manual com variavel temporaria, C++ usa `swap(x, y)`. Python troca com atribuicao multipla `x, y = y, x`. A verificacao de impar e a soma sao identicas nos tres.
