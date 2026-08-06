# 1021 - Banknotes and Coins

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1021

## Descricao

Le um valor em reais com centavos e decompoe em cedulas e moedas, do maior para o menor.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Nunca operar com double em dinheiro. Multiplico por 100 e arredondo para inteiro logo na leitura; a partir dai eh tudo divisao e resto inteiro, igual ao 1018 com mais denominacoes.

## Java vs C vs C++ vs Python

O round() vem do cmath em C e C++, do Math.round() (retorna long) em Java, e eh nativo em Python. Todos trabalham com centavos inteiros para evitar erro de ponto flutuante.
