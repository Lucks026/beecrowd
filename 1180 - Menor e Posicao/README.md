# 1180 - Menor e Posicao

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1180

## Descricao

Le um inteiro N e depois N valores. Encontra o menor valor e a posicao (0-indexada) da sua primeira ocorrencia. Imprime "Menor valor: X" e "Posicao: P".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Le o primeiro valor como menor inicial (posicao 0). Percorre os demais comparando: se achar um valor menor, atualiza o menor e a posicao. No fim imprime o menor e a posicao.

## Java vs C vs C++ vs Python

C, C++ e Java leem valor a valor e comparam com o menor atual. Python le a linha toda com split() e usa min() e index() nativos. A posicao comeca em zero (primeira ocorrencia).
