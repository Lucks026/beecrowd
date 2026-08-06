# 1019 - Time Conversion

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1019

## Descricao

Le um valor em segundos e converte para o formato horas:minutos:segundos (H:M:S), numa unica linha.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Horas: t/3600. Minutos: (t%3600)/60. Segundos: t%60. A ordem importa: cada campo usa o resto do anterior. Os tres saem separados por dois-pontos.

## Java vs C vs C++ vs Python

Identico em logica nos quatro. Divisoes e restos inteiros; a saida junta os campos com ':'. Python usa // para divisao inteira.
