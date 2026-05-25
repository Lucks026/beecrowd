# 1064 - Positives and Average

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1064

## Descricao

Le 6 valores e imprime quantos sao positivos e a media dos positivos com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Parecido com o 1060, mas agora alem de contar os positivos tambem acumula a soma deles pra calcular a media no final. A divisao soma/cont da a media direto.

## Java vs C++

No Java usei printf com %.1f pra formatar 1 casa decimal. No C++ usei setprecision(1) com fixed. O Java precisa de Locale.US no Scanner por causa dos decimais.
