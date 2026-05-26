# 1014 - Consumption

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1014

## Descricao

Le a distancia percorrida (inteiro) e os litros gastos (real). Imprime o consumo em km/l com 3 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Divisao simples: distancia dividida pelo combustivel. A distancia e inteiro mas como o combustivel e double a divisao ja vira ponto flutuante automaticamente.

## Java vs C++ vs Python

Sem diferenca real. Locale.US no Java para leitura do double. Python usa float(input()) e format() na saida.
