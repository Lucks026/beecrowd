# 1020 - Age in Days

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1020

## Descricao

Le um valor inteiro (idade em dias) e converte para anos, meses e dias, considerando ano de 365 dias e mes de 30 dias.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Anos: n/365. Meses: (n%365)/30. Dias: (n%365)%30. Cada valor sai em sua linha com o sufixo "ano(s)", "mes(es)" e "dia(s)".

## Java vs C vs C++ vs Python

Identico nas quatro. Tudo inteiro, com divisoes e restos encadeados. Python usa // para divisao inteira.
