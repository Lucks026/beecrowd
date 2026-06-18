# 1153 - Fatorial Simples

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1153

## Descricao

Le um inteiro N (0 < N < 13) e imprime o seu fatorial, ou seja N * (N-1) * (N-2) * ... * 1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Inicia o fatorial em 1 e multiplica por cada valor de 2 ate N. Como N pode chegar a 12, o resultado cabe em tipo longo.

## Java vs C++ vs Python

Java usa `long`, C++ usa `long long` para acomodar 12! sem overflow. Python lida com inteiros grandes nativamente. O laco de multiplicacao eh identico.
