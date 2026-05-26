# 1041 - Coordinates of a Point

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1041

## Descricao

Le X e Y (reais) e determina se esta na origem, no Eixo X, Eixo Y ou em qual quadrante (Q1-Q4).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Origem vem primeiro (caso mais especifico). Depois eixos. Se passou pelos dois, e algum quadrante.

## Java vs C++ vs Python

Identicos nos tres. Locale.US no Java pra leitura dos doubles. Python usa map(float, input().split()).
