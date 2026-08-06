# 1012 - Area

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1012

## Descricao

Le tres valores A, B e C e calcula cinco areas: triangulo, circulo, trapezio, quadrado e retangulo. Usa pi = 3.14159. Cada resultado sai numa linha com 3 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Triangulo: (A*C)/2. Circulo: pi*C^2 (o raio eh C). Trapezio: ((A+B)*C)/2. Quadrado: B^2. Retangulo: A*B. Cada linha no formato "NOME: valor" com 3 casas.

## Java vs C vs C++ vs Python

Os quatro usam pi = 3.14159 literal. C, C++ e Java imprimem com printf e %.3f (Java com Locale.US para ler os valores com ponto); Python usa format.
