# 1097 - Sequencia IJ 3

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1097

## Descricao

Imprime uma sequencia de pares I/J onde I assume os valores impares de 1 a 9. Para cada I, J comeca em I+6 e decresce 3 vezes. Para I=1 imprime 7,6,5; para I=3 imprime 9,8,7; e assim por diante.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loops aninhados. Externo: I de 1 a 9 com passo 2. Interno: J comeca em I+6 e decresce 3 vezes (jStart, jStart-1, jStart-2). A relacao J = I + 6 faz J subir junto com I.

## Java vs C vs C++ vs Python

Identico nos tres. A diferenca em relacao ao 1096 eh que J depende de I (J inicial muda a cada iteracao externa). Mesma estrutura de for aninhado. Em C, J comeca em I+6 e desce tres vezes, com printf.
