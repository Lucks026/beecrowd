# 1176 - Fibonacci em Vetor

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1176

## Descricao

Le a quantidade T de casos e, para cada um, um indice N (0 <= N <= 60). Imprime o N-esimo numero de Fibonacci no formato "Fib(N) = X".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Pre-calcula os termos de Fibonacci de 0 a 60 num vetor (Fib(0)=0, Fib(1)=1, o resto eh a soma dos dois anteriores). Para cada caso so consulta o vetor. Fib(60) chega a 1548008755920, por isso precisa de 64 bits.

## Java vs C vs C++ vs Python

C e C++ usam long long, Java usa long, Python nao tem limite. Todos pre-calculam o vetor uma vez so antes de responder os casos, evitando recalcular.
