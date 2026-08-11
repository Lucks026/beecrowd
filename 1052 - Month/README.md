# 1052 - Month

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1052

## Descricao

Le um inteiro de 1 a 12 e imprime o nome do mes correspondente em ingles.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Guardei os nomes dos meses num array e usei o inteiro como indice direto. O indice 0 fica vazio pra alinhar com 1=January.

## Java vs C vs C++ vs Python

Nas tres linguagens funciona igual com lista/array de strings. Python usa lista nativa sem precisar declarar tipo. Em C o vetor de meses eh de const char* e imprimo com %s.
