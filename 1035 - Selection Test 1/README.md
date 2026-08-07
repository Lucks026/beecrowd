# 1035 - Selection Test 1

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1035

## Descricao

Le quatro inteiros A, B, C e D e verifica se atendem todas as condicoes: B > C, D > A, C+D > A+B, C e D positivos, A par.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Um unico if com todas as condicoes ligadas por AND. Se todas passam, "Valores aceitos". Senao, "Valores nao aceitos".

## Java vs C vs C++ vs Python

Identicos nos tres. Python usa "and" em vez de "&&" e nao precisa de parenteses extras. Em C, scanf le os quatro inteiros e a condicao logica eh a mesma.
