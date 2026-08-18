# 1145 - Sequencia Logica 2

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1145

## Descricao

Le dois valores X e Y e imprime a sequencia de 1 ate Y, quebrando a linha a cada X numeros. Os numeros sao separados por espaco.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um contador controla quantos numeros ja foram impressos na linha atual. Enquanto for menor que X, imprime o numero com espaco; ao completar X, imprime com quebra de linha e zera o contador.

## Java vs C vs C++ vs Python

Identico nos tres. Y pode ser grande (ate 100000), por isso usa tipos longos em Java e C++. A logica do contador por linha eh a mesma. Em C uso long long no Y e um contador por linha.
