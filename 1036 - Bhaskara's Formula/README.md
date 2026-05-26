# 1036 - Bhaskara's Formula

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1036

## Descricao

Calcula as raizes de uma equacao quadratica. Se delta < 0 ou A == 0, imprime "Impossivel calcular".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Dois casos invalidos: delta negativo e A == 0. R1 usa +sqrt, R2 usa -sqrt.

## Java vs C++ vs Python

sqrt() em C++ vira Math.sqrt() em Java e math.sqrt() em Python. Mesma formula, mesmo formato %.5f.
