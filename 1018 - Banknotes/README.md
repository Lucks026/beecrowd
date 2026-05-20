# 1018 - Banknotes

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1018

## Descricao

Le um valor inteiro em reais e decompoe em cedulas de 100, 50, 20, 10, 5, 2 e 1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Percorro o array de cedulas do maior pro menor. Para cada uma divido o valor restante pela cedula para saber quantas cabem, depois uso % para descontar e passar pro proximo.
