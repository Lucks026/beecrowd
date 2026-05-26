# 1003 - Simple Sum

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1003

## Descricao

Le dois valores reais e imprime a soma no formato "SOMA = X.X" com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Soma de dois doubles com saida em 1 casa decimal usando %.1f. Locale.US no Java pra ler ponto decimal.

## Java vs C++ vs Python

O Locale.US no Java eh o ponto de atencao. Em C++ o cin le ponto sem configuracao. Python usa float(input()) direto.
