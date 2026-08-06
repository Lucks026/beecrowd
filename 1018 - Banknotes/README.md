# 1018 - Banknotes

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1018

## Descricao

Le um valor inteiro em reais, imprime o valor e o decompoe em cedulas de 100, 50, 20, 10, 5, 2 e 1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Percorro as cedulas do maior para o menor. Para cada uma, divido o valor restante pela cedula (quantas cabem) e uso o resto para seguir para a proxima.

## Java vs C vs C++ vs Python

Nos quatro uso um array de cedulas com laco. Python usa // para divisao inteira; C, C++ e Java usam / entre inteiros. O comportamento eh o mesmo.
