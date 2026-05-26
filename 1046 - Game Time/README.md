# 1046 - Game Time

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1046

## Descricao

Le inicio e fim de um jogo (horas inteiras) e calcula a duracao. Pode passar da meia-noite. Se inicio == fim, durou 24 horas.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Se fim > inicio, duracao e fim - inicio. Se fim <= inicio, passou da meia-noite: 24 - inicio + fim. Se dur == 0, seta 24.

## Java vs C++ vs Python

Identicos nos tres. Entrada inteira, saida em caixa alta com format()/printf.
