# 1049 - Animal

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1049

## Descricao

Le tres strings (tipo, classificacao e alimentacao) e identifica o animal. Sao 8 possiveis: aguia, pomba, homem, vaca, pulga, lagarta, sanguessuga e minhoca.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

A ideia eh uma arvore de decisao com if/else encadeado. Primeiro separa vertebrado de invertebrado, depois ave/mamifero ou inseto/anelideo, e por fim o tipo de alimentacao define o animal.

## Java vs C++

No Java comparo strings com .equals(), no C++ basta usar ==. A leitura no Java usa nextLine() e no C++ getline(). O resto da logica fica identico.
