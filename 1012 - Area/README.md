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

## Java vs C++

Pi em C++ vem do acos(-1.0), em Java do Math.PI. O resto e identico nos dois. O Locale.US no Scanner do Java e necessario para ler os valores com ponto decimal.
