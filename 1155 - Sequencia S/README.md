# 1155 - Sequencia S

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1155

## Descricao

Sem entrada. Calcula e imprime o valor de S, onde S = 1 + 1/2 + 1/3 + ... + 1/100 (serie harmonica), com duas casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Acumula em S o valor de 1/i para i de 1 ate 100. A divisao precisa ser em ponto flutuante (1.0/i) para nao truncar. No fim imprime com duas casas decimais (resultado aproximado de 5.19).

## Java vs C vs C++ vs Python

Atencao a divisao: em Java e C++ usa-se 1.0/i para forcar ponto flutuante. Java usa `Locale.US` no printf, C++ usa `printf("%.2f")`, Python usa f-string com `:.2f`. Em C, laco de 1 a 100 somando 1.0/i e printf com %.2f.
