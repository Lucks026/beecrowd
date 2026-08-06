# 1177 - Preenchimento de Vetor II

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1177

## Descricao

Le um valor T e preenche um vetor N[1000] com a sequencia 0, 1, ..., T-1 repetida ate a posicao 999. Imprime cada posicao no formato "N[i] = x".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

A posicao i recebe i % T, o que gera a sequencia repetida (0 a T-1) sem precisar de contador auxiliar que reinicia. Sao 1000 posicoes impressas.

## Java vs C vs C++ vs Python

Identico nas quatro. Um laco de 1000 iteracoes com i % T. So muda a sintaxe de impressao entre as linguagens.
