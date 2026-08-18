# 1150 - Ultrapassando Z

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1150

## Descricao

Le X e Z (Z eh lido repetidamente ate ser maior que X). Conta quantos inteiros consecutivos a partir de X precisam ser somados para que a soma ultrapasse Z. Imprime essa quantidade.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Valida Z: enquanto for menor ou igual a X, le outro Z. Depois soma X, X+1, X+2, ... acumulando e contando, ate a soma passar de Z. O contador final eh a resposta.

## Java vs C vs C++ vs Python

Identico nos tres. A condicao do laco eh `soma <= z`. Java e C++ usam tipos longos para a soma; Python lida com inteiros grandes nativamente. O Python le todos os tokens de uma vez para tratar as multiplas leituras de Z. Em C uso long long, revalido Z e conto os termos ate passar de Z.
