# 1010 - Simple Calculate

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1010

## Descricao

Le codigo, quantidade e preco unitario de dois produtos. Imprime o valor total a pagar no formato "VALOR A PAGAR: R$ X.XX".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Quantidade vezes preco unitario para cada produto, depois soma os dois totais. A saida tem um formato fixo com 2 casas decimais.

## Java vs C vs C++ vs Python

C, C++ e Java usam printf para controlar o formato; o Java precisa de Locale.US para ler os precos com ponto. Python le com split() e formata com f-string/format.
