# 1013 - The Greatest

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1013

## Descricao

Le tres inteiros e imprime o maior deles no formato "X eh o maior".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Encontrar o maior dos tres sem if aninhado. Tanto em C++ quanto em Java da pra resolver em uma linha usando as funcoes de maximo da biblioteca padrao.

## Java vs C++

C++ aceita max({a, b, c}) com lista de inicializacao. Java nao tem isso, entao precisa aninhar dois Math.max: Math.max(a, Math.max(b, c)).
