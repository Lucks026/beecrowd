# 1050 - DDD

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1050

## Descricao

Le um inteiro representando um DDD e imprime a cidade correspondente. Se nao for nenhum dos cadastrados, imprime "DDD nao cadastrado".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Usei switch/case pra mapear cada DDD pra sua cidade (61 Brasilia, 71 Salvador, 11 Sao Paulo, etc.). O default cuida dos que nao existem no mapa.

## Java vs C vs C++ vs Python

Java e C++ usam switch/case. Python usa dicionario com .get() que eh mais limpo e nao precisa de break. Em C uso switch com os codigos de DDD, igual ao C++.
