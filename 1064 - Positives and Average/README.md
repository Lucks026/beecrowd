# 1064 - Positives and Average

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1064

## Descricao

Le 6 valores e imprime quantos sao positivos e a media dos positivos com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Parecido com o 1060, mas agora alem de contar os positivos tambem acumula a soma deles pra calcular a media no final. A divisao soma/cont da a media direto.

## Java vs C vs C++ vs Python

No Java usei printf com %.1f, no C++ setprecision(1) com fixed. Python usa format() com :.1f. A logica do loop e identica nos tres. Em C, scanf/printf; divido a soma pela quantidade com %.1f.
