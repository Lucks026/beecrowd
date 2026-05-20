# 1045 - Triangle Types

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1045

## Descricao

Valida o triangulo e classifica como retangulo, obtusangulo ou acutangulo.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Ordeno os lados para garantir que z seja o maior. Se z^2 == x^2+y^2, retangulo. Se z^2 > x^2+y^2, obtusangulo. Se z^2 < x^2+y^2, acutangulo.

## Java vs C++

C++ usa sort() com ponteiros. Java usa Arrays.sort(). Mesmo resultado.
