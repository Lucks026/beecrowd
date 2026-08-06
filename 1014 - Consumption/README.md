# 1014 - Consumption

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1014

## Descricao

Le a distancia percorrida (inteiro) e os litros gastos (real). Imprime o consumo em km/l com 3 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Divisao simples: distancia dividida pelo combustivel. A distancia eh inteira, mas como o combustivel eh double a divisao ja vira ponto flutuante. Saida "X.XXX km/l".

## Java vs C vs C++ vs Python

Sem diferenca real na logica. C, C++ e Java usam printf (Java com Locale.US para o double); Python usa float(input()) e format.
