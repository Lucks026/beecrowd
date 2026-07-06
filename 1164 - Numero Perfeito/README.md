# 1164 - Numero Perfeito

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1164

## Descricao

Le N casos de teste, cada um com um inteiro X. Um numero eh perfeito quando a soma dos seus divisores proprios (excluindo ele mesmo) eh igual a ele. Imprime "X eh perfeito" ou "X nao eh perfeito".

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Como X pode chegar a 10^8, a soma dos divisores eh feita ate a raiz quadrada de X: para cada i que divide X, soma-se i e o par X/i (sem contar X e sem duplicar quando i eh a raiz exata). Se a soma dos divisores proprios for igual a X, ele eh perfeito.

## Java vs C++ vs Python

Identico nos tres. O laco vai enquanto `i * i <= x`, evitando percorrer todos os numeros ate X. Java e C++ usam `long`/`long long`, Python lida com inteiros grandes nativamente.
