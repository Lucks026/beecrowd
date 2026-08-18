# 1142 - PUM

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1142

## Descricao

Le um inteiro N e imprime N linhas. Cada linha tem tres numeros consecutivos seguidos de "PUM", onde a palavra substitui cada quarto numero (multiplos de 4).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Conta de 1 ate 4*N. A cada multiplo de 4, imprime "PUM" e quebra a linha; nos demais, imprime o numero seguido de espaco. Assim cada linha fica no formato "1 2 3 PUM".

## Java vs C vs C++ vs Python

Identico nos tres. A condicao `i % 4 == 0` decide entre "PUM" com quebra de linha e o numero com espaco. Java usa `print`/`println`, C++ usa `cout`, Python usa `end=" "`. Em C, laco ate 4N imprimindo PUM nos multiplos de 4.
