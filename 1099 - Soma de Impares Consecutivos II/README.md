# 1099 - Soma de Impares Consecutivos II

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1099

## Descricao

Le N casos de teste, cada um com dois inteiros X e Y. Para cada caso, imprime a soma de todos os numeros impares estritamente entre eles (exclusivo nas pontas).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Eh a versao com varios casos do 1071. Para cada caso, ordena X e Y, percorre de X+1 ate Y-1 e soma os impares. Os valores podem vir em qualquer ordem, por isso o swap.

## Java vs C vs C++ vs Python

Java faz swap com variavel temporaria, C++ usa `swap(x, y)`, Python troca com `x, y = y, x`. O loop externo de N casos eh identico nos tres. Em C, laco de N casos com swap manual e soma dos impares.
