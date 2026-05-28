# 1080 - Maior e Posicao

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1080

## Descricao

Le 100 valores inteiros positivos e distintos. Imprime o maior valor lido e a posicao (1-indexada) em que ele apareceu na entrada.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Le o primeiro valor como maior inicial (posicao 1). Depois percorre os 99 restantes comparando: se o valor atual for maior, atualiza o maior e a posicao. No final imprime ambos.

## Java vs C++ vs Python

Identico nos tres. Le o primeiro valor, depois um loop de 2 a 100. Java e C++ usam `Scanner`/`cin` dentro do loop. Python usa `int(input())` a cada iteracao. Mesma comparacao e atualizacao.
