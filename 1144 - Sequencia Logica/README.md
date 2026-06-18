# 1144 - Sequencia Logica

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1144

## Descricao

Le um inteiro N e imprime 2*N linhas. Para cada i de 1 a N, a primeira linha mostra i, i² e i³; a segunda mostra i, i²+1 e i³+1.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop de 1 a N. Em cada passo imprime duas linhas: uma com o quadrado e o cubo, outra com o quadrado e o cubo somados de 1. Usa tipos longos para o cubo nao estourar.

## Java vs C++ vs Python

Java usa `long`, C++ usa `long long` para evitar overflow do cubo. Python lida com inteiros grandes nativamente. A estrutura das duas linhas por iteracao eh identica.
