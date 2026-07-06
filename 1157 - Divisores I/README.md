# 1157 - Divisores I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1157

## Descricao

Le um inteiro N e imprime todos os seus divisores positivos, um por linha.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Percorre todos os valores de 1 ate N e, para cada um, verifica se divide N exatamente (resto zero). Se sim, eh um divisor e eh impresso.

## Java vs C++ vs Python

Identico nos tres. Um unico laco com a verificacao `n % i == 0`. Java usa `println`, C++ usa `cout`, Python usa `print`.
