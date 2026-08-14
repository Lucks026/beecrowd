# 1115 - Quadrante

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1115

## Descricao

Le pares de coordenadas X e Y ate que pelo menos uma seja zero. Para cada par, imprime o quadrante do plano cartesiano: "primeiro", "segundo", "terceiro" ou "quarto".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop que le X e Y e para quando X == 0 ou Y == 0. Pelos sinais das duas coordenadas determina o quadrante: (+,+) primeiro, (-,+) segundo, (-,-) terceiro, (+,-) quarto.

## Java vs C vs C++ vs Python

Identico nos tres. Cadeia de if/else if comparando os sinais. As labels sao escritas em portugues por minusculas conforme o enunciado. Em C, while(scanf(...) == 2) e cadeia de if pelos sinais.
