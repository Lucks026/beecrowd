# 1051 - Imposto de Renda

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1051

## Descricao

Le um salario e calcula o imposto progressivo. Ate 2000 eh isento, de 2000 a 3000 paga 8%, de 3000 a 4500 paga 18%, acima de 4500 paga 28%.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

O imposto eh progressivo, entao cada faixa taxa so o que excede o limite anterior. Usei Math.min (Java) e min (C++) pra limitar cada parcela. Se der isento, imprime "Isento" sem valor.

## Java vs C vs C++ vs Python

No Java formatei a saida com printf, no C++ com cout e setprecision(2). Python usa min() nativo e format() na saida. Em C uso o operador ternario no lugar do min() do C++ e printf com %.2f.
