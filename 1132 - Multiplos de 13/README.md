# 1132 - Multiplos de 13

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1132

## Descricao

Le dois inteiros X e Y (em qualquer ordem) e imprime a soma de todos os numeros do intervalo fechado entre eles que NAO sao multiplos de 13.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Ordena X e Y para garantir o menor primeiro. Percorre todos os numeros de X ate Y (inclusive) e soma apenas os que nao sao divisiveis por 13 (resto da divisao por 13 diferente de zero).

## Java vs C vs C++ vs Python

Identico nos tres. Java faz swap com variavel temporaria, C++ usa `swap`, Python troca com atribuicao multipla. A verificacao `i % 13 != 0` eh a mesma. Python le os dois valores de `sys.stdin` para aceitar entrada em uma ou duas linhas. Em C faco o swap manual e somo os nao-multiplos de 13.
