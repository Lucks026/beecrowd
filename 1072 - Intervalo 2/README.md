# 1072 - Intervalo 2

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1072

## Descricao

Le um inteiro N e depois N inteiros. Conta quantos estao no intervalo [10, 20] e quantos estao fora. Imprime no formato "X in" e "Y out".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Dois contadores: um para dentro do intervalo e outro para fora. A cada numero lido, verifica se esta entre 10 e 20 (inclusive) e incrementa o contador correspondente.

## Java vs C vs C++ vs Python

Identico nos tres. Dois contadores e uma verificacao `x >= 10 && x <= 20`. Python permite a sintaxe mais limpa `10 <= x <= 20`. Em C, scanf dentro do laco contando dentro e fora do intervalo.
