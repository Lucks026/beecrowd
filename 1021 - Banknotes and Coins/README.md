# 1021 - Banknotes and Coins

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1021

## Descricao

Le um valor em reais com centavos e decompoe em cedulas e moedas, do maior para o menor.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Nunca opere com doubles em dinheiro. Multiplico por 100 e arredondo para inteiro logo na leitura. A partir dai tudo e divisao e resto inteiro, igual ao 1018 so com mais denominacoes.

## Java vs C++ vs Python

O round() em C++ e da cmath, em Java e Math.round() que retorna long. Python tem round() nativo. Python usa // pra divisao inteira.
