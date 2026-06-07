# 1098 - Sequencia IJ 4

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1098

## Descricao

Imprime uma sequencia de pares I/J onde I varia de 0 a 2 com passo 0.2, e para cada I tres valores de J (J = 1+I, 2+I, 3+I). Quando I eh um numero inteiro (0, 1 ou 2), imprime sem casas decimais; caso contrario, imprime com uma casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Usa um contador inteiro (step de 0 a 10) e calcula I = step * 0.2 para evitar erros de ponto flutuante. Quando step % 5 == 0, I cai em valor inteiro (0, 1 ou 2) e formata como inteiro; caso contrario, formata com uma casa decimal. J segue a formula 1 + I + k onde k vai de 0 a 2.

## Java vs C++ vs Python

Java usa `Locale.US` no `printf` para garantir o ponto como separador decimal. C++ usa `printf("%.1f")`. Python usa f-string com `:.1f`. Os tres usam `round` para evitar problemas de precisao na hora de converter para inteiro.
