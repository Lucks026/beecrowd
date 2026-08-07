# 1037 - Interval

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1037

## Descricao

Le um numero e imprime em qual intervalo ele esta.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Colchete inclui o valor, parentese exclui. [0,25] usa >= 0 && <= 25. (25,50] usa > 25 && <= 50.

## Java vs C vs C++ vs Python

Identicos nos tres. Python permite encadear comparacoes tipo 25 < n <= 50 de forma mais legivel. Em C, a cadeia de if/else if eh identica, com scanf/printf.
