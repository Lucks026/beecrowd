# 1116 - Dividindo X por Y

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1116

## Descricao

Le N e depois N pares de inteiros X e Y. Para cada par, imprime o resultado de X dividido por Y com uma casa decimal. Se Y for zero, imprime "divisao impossivel".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Para cada caso, verifica se o divisor eh zero. Se sim, imprime a mensagem de erro. Caso contrario, faz a divisao em ponto flutuante (converte para double antes) e imprime com uma casa decimal.

## Java vs C++ vs Python

Cuidado importante: a divisao entre dois inteiros em C++ e Java gera inteiro, por isso eh feito o cast para double. Java usa `Locale.US` no printf, C++ usa `printf("%.1f")`, Python ja faz divisao real com `/` e formata com `:.1f`.
