# 1101 - Sequencia de Numeros e Soma

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1101

## Descricao

Le pares de valores M e N ate que um deles seja menor ou igual a zero. Para cada par, imprime a sequencia do menor ao maior (inclusive) seguida de "Sum=" e a soma de todos.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop infinito que le M e N e para quando qualquer um eh <= 0. Ordena para M <= N, imprime cada numero seguido de espaco somando ao acumulador, e no fim imprime "Sum=" com o total.

## Java vs C++ vs Python

Java usa `hasNextInt()` para controlar a leitura, C++ usa `while(cin >> m >> n)`, Python le linha a linha de `sys.stdin`. A saida tem espaco apos cada numero e "Sum=" colado no total.
