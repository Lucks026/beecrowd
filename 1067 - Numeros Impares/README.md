# 1067 - Numeros Impares

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1067

## Descricao

Le um valor inteiro X e imprime todos os numeros impares de 1 ate X, um por linha.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um loop de 1 ate X com passo 2 garante que apenas impares sejam impressos, sem necessidade de verificacao com modulo.

## Java vs C vs C++ vs Python

Identico nos tres. Java e C++ usam `for(int i = 1; i <= x; i += 2)`, Python usa `range(1, x + 1, 2)`. Mesma abordagem com incremento de 2. Em C, laco com passo 2 e printf.
