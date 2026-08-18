# 1158 - Soma de Impares Consecutivos III

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1158

## Descricao

Le N casos de teste, cada um com dois inteiros X e Y. Para cada caso, imprime a soma de Y numeros impares consecutivos a partir de X, incluindo X se ele for impar.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Se X for par, avanca para o proximo impar (X+1). Depois soma Y impares consecutivos: X, X+2, X+4, ..., X+2*(Y-1). Por exemplo, X=4 e Y=5 resulta em 5+7+9+11+13 = 45. Usa tipos longos pois a soma pode ser grande.

## Java vs C vs C++ vs Python

Java usa `long`, C++ usa `long long` para a soma. Python lida nativamente com inteiros grandes. O ajuste de paridade e o laco de soma sao identicos nos tres. Em C uso long long e ajusto a paridade antes de somar.
