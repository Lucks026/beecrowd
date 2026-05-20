# 1012 - Area

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1012

## Descricao

Le tres valores A, B e C e calcula tres areas geometricas com eles. A e C sao usados no triangulo e no trapezio; B e o raio do circulo.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Os tres valores servem a propositos diferentes: A e C aparecem em dois calculos, B so aparece no circulo. Triangulo: (A * C) / 2. Circulo: pi * B^2. Trapezio: ((A + B) * C) / 2.
