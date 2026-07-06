# 1172 - Substituicao em Vetor I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1172

## Descricao

Le um vetor X de 10 posicoes e substitui todos os valores nulos ou negativos por 1. Depois imprime cada posicao no formato "X[i] = valor".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Como a substituicao depende apenas do proprio valor lido, nao eh preciso armazenar o vetor inteiro. Para cada uma das 10 posicoes, se o valor for menor ou igual a zero, vira 1; depois imprime o indice e o valor final.

## Java vs C++ vs Python

Identico nos tres. Um laco de 0 a 9 lendo, ajustando e imprimindo. Java concatena a String, C++ usa `cout` encadeado, Python usa f-string. O Python le todos os tokens de uma vez para aceitar valores em uma ou varias linhas.
