# 1015 - Distance Between Two Points

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1015

## Descricao

Le dois pontos (x1, y1) e (x2, y2), um par por linha, e calcula a distancia euclidiana entre eles com 4 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Teorema de Pitagoras no plano: raiz de ((x2-x1)^2 + (y2-y1)^2). Saida com 4 casas decimais.

## Java vs C vs C++ vs Python

C e C++ usam sqrt/pow; Java usa Math.sqrt/Math.pow; Python usa ** e math.sqrt. Cada ponto vem em uma linha, com as duas coordenadas separadas por espaco.
