# 1011 - Sphere

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1011

## Descricao

Le o raio e calcula o volume da esfera: V = (4/3) * pi * R^3. Saida com 4 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Usar 4.0/3.0 pra divisao real, nao inteira. r * r * r em vez de pow() pra mais precisao. Saida com %.4f.

## Java vs C++ vs Python

Pi: Math.PI no Java, acos(-1.0) no C++, math.pi no Python. No resto sao identicos.
