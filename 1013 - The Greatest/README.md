# 1013 - The Greatest

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1013

## Descricao

Le tres inteiros (na mesma linha) e imprime o maior deles no formato "X eh o maior".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Encontrar o maior dos tres valores. Os tres vem na mesma linha, entao a leitura precisa considerar isso.

## Java vs C vs C++ vs Python

Em C nao ha funcao de maximo pronta, entao comparo manualmente com if. C++ aceita max({a, b, c}) com lista. Java aninha dois Math.max. Python usa max() nativo e le a linha com split().
