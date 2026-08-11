# 1070 - Seis Numeros Impares

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1070

## Descricao

Le um valor inteiro X e imprime os 6 numeros impares consecutivos a partir de X. Se X for par, comeca de X+1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Primeiro verifica se X eh par (modulo 2 == 0). Se for, incrementa 1. Depois um loop de 6 iteracoes imprimindo X e somando 2 a cada passo.

## Java vs C vs C++ vs Python

Mesma logica nos tres. Verificacao de paridade seguida de loop com incremento de 2. Python usa `x += 1` e `range(6)`, enquanto Java e C++ usam `x++` e `for(int i = 0; i < 6; i++)`. Em C ajusto a paridade e imprimo seis valores com printf.
