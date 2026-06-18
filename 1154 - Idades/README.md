# 1154 - Idades

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1154

## Descricao

Le um numero indeterminado de idades ate ler um valor negativo (que nao entra no calculo). Calcula e imprime a idade media do grupo com duas casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Acumula a soma das idades e conta quantas foram lidas, parando ao encontrar um valor negativo. No fim, divide a soma pela quantidade e imprime com duas casas decimais.

## Java vs C++ vs Python

Java usa `Locale.US` no printf, C++ usa `printf("%.2f")`, Python usa f-string com `:.2f`. O cast para double garante a divisao real antes de formatar.
