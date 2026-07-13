# 1005 - Average 1

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1005

## Descricao

Le dois valores reais A e B (notas com pesos 3.5 e 7.5) e imprime a media ponderada no formato "MEDIA = valor" com 5 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

media = (3.5 * A + 7.5 * B) / 11.0. A soma dos pesos eh 11, entao divide por 11. Saida com %.5f.

## Java vs C vs C++ vs Python

A formula ponderada eh a mesma nas quatro. C e C++ usam printf com %.5f, Java usa printf com Locale.US pra ler e imprimir com ponto, e Python usa format().
