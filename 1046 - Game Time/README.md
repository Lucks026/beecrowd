# 1046 - Game Time

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1046

## Descricao

Le inicio e fim de um jogo (horas inteiras) e calcula a duracao. Pode passar da meia-noite.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Se fim >= inicio, duracao e fim - inicio. Se nao, o jogo passou da meia-noite: (24 - inicio) + fim.

## Java vs C++

Identicos. Entrada inteira, saida com texto fixo.
