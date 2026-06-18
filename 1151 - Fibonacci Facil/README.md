# 1151 - Fibonacci Facil

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1151

## Descricao

Le um inteiro N e imprime os N primeiros numeros da sequencia de Fibonacci (0 1 1 2 3 5 8...), na mesma linha, separados por espaco, sem espaco apos o ultimo.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Comeca com a = 0 e b = 1. A cada passo imprime a e avanca a sequencia (proximo = a + b, depois a = b e b = proximo). Repete N vezes controlando o espaco entre os numeros.

## Java vs C++ vs Python

Java usa StringBuilder e `long`, C++ usa `long long` e controla o espaco, Python acumula em lista e usa `" ".join(...)`. Os valores cabem em tipo longo pois N < 46.
