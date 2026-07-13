# 1002 - Area of a Circle

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1002

## Descricao

Le o raio e calcula a area do circulo com A = pi * R^2, usando pi = 3.14159 (valor definido no enunciado). Saida com 4 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Formula direta usando a constante 3.14159 do enunciado. Nao usar o pi completo da linguagem (Math.PI, acos(-1.0), math.pi), senao a resposta diverge para raios grandes. Nao tem espaco entre "A=" e o valor. Saida com %.4f.

## Java vs C vs C++ vs Python

Os quatro usam a constante literal 3.14159. C e C++ imprimem com printf, Java com printf (Locale.US) e Python com format(), todos com 4 casas.
