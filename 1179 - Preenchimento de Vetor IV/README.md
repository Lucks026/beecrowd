# 1179 - Preenchimento de Vetor IV

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1179

## Descricao

Le 15 inteiros e separa em dois vetores de 5 posicoes: um de pares e outro de impares. Sempre que um vetor enche (5 elementos), imprime e reinicia. No fim, imprime o que sobrou, os impares primeiro e depois os pares.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Dois vetores com contadores. A cada valor lido, coloca no vetor certo (par ou impar); ao chegar em 5, imprime "par[i] = v" ou "impar[i] = v" e zera o contador. No final, imprime as sobras de impar e depois de par, com indices reiniciados.

## Java vs C vs C++ vs Python

Estrutura identica nas quatro. C, C++ e Java usam vetores fixos de 5 com contador; Python usa listas que sao reiniciadas ao encher. As mensagens saem em minusculas ("par[i] = v" e "impar[i] = v"), com indice comecando em zero.
