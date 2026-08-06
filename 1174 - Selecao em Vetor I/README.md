# 1174 - Selecao em Vetor I

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1174

## Descricao

Le 100 valores reais em um vetor A[100] e imprime apenas as posicoes cujo valor eh menor ou igual a 10, no formato "A[i] = x" com uma casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

A cada valor lido, testa se eh <= 10 e, em caso afirmativo, imprime a posicao e o valor com uma casa decimal. Nao precisa guardar o vetor inteiro, so o indice atual.

## Java vs C vs C++ vs Python

C, C++ e Java imprimem com printf e %.1f; o Java precisa de Locale.US pra ler e imprimir com ponto. Python usa f-string com :.1f e le todos os valores de uma vez.
