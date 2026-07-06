# 1165 - Numero Primo

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1165

## Descricao

Le N casos de teste, cada um com um inteiro X. Um numero primo eh divisivel apenas por 1 e por ele mesmo. Imprime "X eh primo" ou "X nao eh primo".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Testa divisibilidade de X por cada i de 2 ate a raiz quadrada de X. Se encontrar algum divisor, X nao eh primo. Numeros menores ou iguais a 1 nao sao primos. A verificacao ate a raiz mantem o desempenho mesmo com X ate 10^7.

## Java vs C++ vs Python

Identico nos tres. O laco vai enquanto `i * i <= x` e para assim que acha um divisor. Java e C++ usam `long`/`long long`, Python usa while com inteiros nativos.
