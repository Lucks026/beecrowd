# 1159 - Soma de Pares Consecutivos

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1159

## Descricao

Le um valor inteiro X repetidamente ate ler zero. Para cada X, imprime a soma de 5 numeros pares consecutivos a partir de X, incluindo X se ele for par.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Se X for impar, avanca para o proximo par (X+1). Depois soma 5 pares consecutivos: X, X+2, X+4, X+6, X+8. Por exemplo, X=11 vira 12 e resulta em 12+14+16+18+20 = 80. O laco encerra ao ler zero.

## Java vs C++ vs Python

Java usa `hasNextInt()` para controlar a leitura, C++ usa `while(cin >> x)`, Python le linha a linha de `sys.stdin`. Todos param ao ler zero e usam tipo longo para a soma.
