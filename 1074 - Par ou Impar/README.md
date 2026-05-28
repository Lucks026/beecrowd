# 1074 - Par ou Impar

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1074

## Descricao

Le N e depois N inteiros. Para cada valor, imprime se eh par (EVEN) ou impar (ODD) e se eh positivo (POSITIVE) ou negativo (NEGATIVE). Se for zero, imprime apenas "NULL".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Para cada numero: se for 0, imprime "NULL". Senao, verifica paridade com modulo 2 e sinal com comparacao. Imprime as duas palavras na mesma linha separadas por espaco.

## Java vs C++ vs Python

Java usa operador ternario para montar as strings. C++ imprime em duas partes com `cout`. Python usa operador ternario inline com f-string. Todas as saidas em maiusculas conforme exigido.
