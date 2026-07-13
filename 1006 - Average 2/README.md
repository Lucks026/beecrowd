# 1006 - Average 2

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1006

## Descricao

Le 3 valores e calcula a media ponderada com pesos 2, 3 e 5. Saida com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

(A*2 + B*3 + C*5) / 10.0. A soma dos pesos eh 10, entao divide por 10.

## Java vs C vs C++ vs Python

Identicos nas quatro. C e C++ leem com scanf/cin e imprimem com printf, Java usa Locale.US pra leitura de doubles e Python usa float(input()).
