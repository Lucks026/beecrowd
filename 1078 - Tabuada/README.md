# 1078 - Tabuada

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1078

## Descricao

Le um inteiro N (2 < N < 1000) e imprime a tabuada de N no formato "i x N = resultado", de 1 ate 10.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um loop de 1 a 10 que imprime cada linha da tabuada no formato especificado, calculando i * N.

## Java vs C vs C++ vs Python

Identico nos tres. Java usa concatenacao de String, C++ usa `cout` encadeado, Python usa f-string. Mesmo formato "i x N = resultado" com espacos ao redor do x e do =. Em C, laco de 1 a 10 com printf montando a linha da tabuada.
