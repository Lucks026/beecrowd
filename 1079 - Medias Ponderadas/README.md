# 1079 - Medias Ponderadas

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1079

## Descricao

Le N casos de teste, cada um com 3 valores reais. Calcula e imprime a media ponderada com pesos 2, 3 e 5 respectivamente, com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Para cada caso de teste, calcula (a*2 + b*3 + c*5) / 10.0 e imprime com uma casa decimal. A soma dos pesos eh 2+3+5 = 10.

## Java vs C++ vs Python

Java usa `Scanner.useLocale(Locale.US)` para leitura e `System.out.printf(Locale.US, "%.1f")` para saida decimal com ponto. C++ usa `printf("%.1f")`. Python usa f-string com `:.1f`. Todos formatam com 1 casa decimal.
