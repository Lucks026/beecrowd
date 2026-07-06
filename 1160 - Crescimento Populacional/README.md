# 1160 - Crescimento Populacional

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1160

## Descricao

Le T casos de teste. Cada caso tem as populacoes PA e PB (PA < PB) e as taxas de crescimento G1 e G2 (G1 > G2). Calcula em quantos anos a cidade A ultrapassa a cidade B em populacao. Se passar de 100 anos, imprime "Mais de 1 seculo.".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

A cada ano, cada populacao cresce pela sua taxa: nova = atual + trunc(atual * G / 100). A populacao eh sempre inteira, entao o crescimento eh truncado. O laco conta os anos ate PA passar PB, limitado a 101 iteracoes. Se o contador ultrapassa 100, imprime a mensagem do seculo; senao imprime a quantidade de anos.

## Java vs C++ vs Python

O crescimento usa divisao em ponto flutuante truncada para inteiro (cast em Java/C++, `int()` em Python), o que garante o mesmo resultado nos tres. Java usa `Locale.US` para ler as taxas com ponto decimal. A condicao de parada e o limite de 101 anos sao identicos.
