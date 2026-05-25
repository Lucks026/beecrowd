# 1050 - DDD

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1050

## Descricao

Le um inteiro representando um DDD e imprime a cidade correspondente. Se nao for nenhum dos cadastrados, imprime "DDD nao cadastrado".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Usei switch/case pra mapear cada DDD pra sua cidade (61 Brasilia, 71 Salvador, 11 Sao Paulo, etc.). O default cuida dos que nao existem no mapa.

## Java vs C++

A diferenca aqui eh minima. Tanto Java quanto C++ tem switch com int, entao a estrutura fica praticamente igual. So muda o print (cout vs System.out.println).
