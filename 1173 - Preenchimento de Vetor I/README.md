# 1173 - Preenchimento de Vetor I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1173

## Descricao

Le um valor V e preenche um vetor N[10]: a primeira posicao recebe V e cada posicao seguinte recebe o dobro da anterior. Imprime cada posicao no formato "N[i] = X".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

N[0] recebe V. A cada uma das 10 posicoes, imprime o valor atual e multiplica por 2 para a proxima. Nao precisa armazenar o vetor, basta ir dobrando.

## Java vs C vs C++ vs Python

Identico nas quatro. Um laco de 10 iteracoes imprimindo e dobrando. C, C++ e Java usam int; Python nao tem limite de inteiro.
