# 1049 - Animal

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1049

## Descricao

Le tres strings (tipo, classificacao e alimentacao) e identifica o animal. Sao 8 possiveis: aguia, pomba, homem, vaca, pulga, lagarta, sanguessuga e minhoca.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

A ideia eh uma arvore de decisao com if/else encadeado. Primeiro separa vertebrado de invertebrado, depois ave/mamifero ou inseto/anelideo, e por fim o tipo de alimentacao define o animal.

## Java vs C vs C++ vs Python

No Java comparo strings com .equals(), no C++ e Python basta usar ==. Python usa input().strip() pra leitura. A arvore de if/else fica identica nos tres. Em C leio as tres palavras com scanf("%s") e comparo com strcmp.
