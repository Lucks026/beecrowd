# 1113 - Crescente e Decrescente

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1113

## Descricao

Le pares de inteiros X e Y ate que sejam iguais. Para cada par, imprime "Crescente" se X < Y ou "Decrescente" caso contrario.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop que le X e Y e para quando X == Y. Compara os dois e imprime a mensagem correspondente. Quando iguais, encerra sem imprimir nada.

## Java vs C++ vs Python

Identico nos tres. Apenas uma comparacao por iteracao. Java usa `hasNextInt()`, C++ usa `while(cin >> x >> y)`, Python le de `sys.stdin`.
