# 1133 - Resto da Divisao

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1133

## Descricao

Le dois inteiros X e Y (em qualquer ordem) e imprime todos os valores estritamente entre eles cujo resto da divisao por 5 seja 2 ou 3.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Ordena X e Y para o menor primeiro. Percorre de X+1 ate Y-1 (exclusivo nas pontas) e imprime os numeros cujo resto por 5 eh 2 ou 3.

## Java vs C++ vs Python

Identico nos tres. Java faz swap com variavel temporaria, C++ usa `swap`, Python troca com atribuicao multipla. A condicao `i % 5 == 2 || i % 5 == 3` eh a mesma.
