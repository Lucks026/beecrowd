# 1073 - Quadrado de Pares

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1073

## Descricao

Le um inteiro N (5 < N < 2000) e imprime o quadrado de cada numero par de 1 ate N, no formato "i^2 = resultado".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um loop de 2 ate N com passo 2 percorre apenas os pares. Para cada um, imprime no formato especificado calculando i*i.

## Java vs C vs C++ vs Python

Identico nos tres. Loop com incremento de 2. Java usa concatenacao de String, C++ usa `cout` encadeado, Python usa f-string. Mesmo formato de saida "i^2 = resultado". Em C, laco de pares imprimindo i^2 com printf.
