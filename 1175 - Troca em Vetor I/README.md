# 1175 - Troca em Vetor I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1175

## Descricao

Le um vetor N[20] de inteiros, inverte a ordem (troca a posicao i com a 19-i) e imprime cada posicao no formato "N[i] = Y".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Percorre a primeira metade (0 a 9) trocando N[i] com N[19-i]. Isso inverte o vetor. So precisa ir ate a posicao 9, senao as trocas se desfazem. Depois imprime as 20 posicoes.

## Java vs C vs C++ vs Python

C e Java fazem a troca com variavel temporaria; C++ usa swap. Python inverte direto com a fatia [::-1]. A saida eh a mesma nas quatro.
