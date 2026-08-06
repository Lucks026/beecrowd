# 1011 - Sphere

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1011

## Descricao

Le o raio e calcula o volume da esfera: V = (4/3) * pi * R^3, usando pi = 3.14159 (valor do enunciado). Saida com 3 casas decimais no formato "VOLUME = X.XXX".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Usar 4.0/3.0 para divisao real (nao inteira) e r*r*r para o cubo. A constante pi = 3.14159 vem do enunciado; usar o pi completo da linguagem faz a resposta divergir para raios grandes. Saida com %.3f.

## Java vs C vs C++ vs Python

Os quatro usam a constante literal 3.14159. C, C++ e Java imprimem com printf e %.3f (Java com Locale.US); Python usa format com :.3f.
