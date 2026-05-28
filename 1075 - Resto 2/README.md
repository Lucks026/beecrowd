# 1075 - Resto 2

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1075

## Descricao

Le um inteiro N (N < 10000) e imprime todos os numeros de 1 a 10000 que, divididos por N, dao resto igual a 2.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um loop de 1 a 10000 verificando se `i % N == 2`. Se sim, imprime o numero. Simples verificacao de resto da divisao.

## Java vs C++ vs Python

Identico nos tres. Um unico loop com verificacao de modulo. Python usa `range(1, 10001)`, Java e C++ usam `for(int i = 1; i <= 10000; i++)`.
