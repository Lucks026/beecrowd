# 1178 - Preenchimento de Vetor III

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1178

## Descricao

Le um valor real X e preenche um vetor N[100]: a primeira posicao recebe X e cada posicao seguinte recebe a metade da anterior. Imprime cada posicao no formato "N[i] = Y" com 4 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

N[0] = X. A cada passo imprime o valor atual e divide por 2 para a proxima posicao. Sao 100 posicoes, com saida em 4 casas decimais.

## Java vs C vs C++ vs Python

Detalhe de arredondamento: C, C++ e Python usam o "ties-to-even" padrao do IEEE (por exemplo 0.78125 vira 0.7812). O printf do Java arredonda com HALF_UP e divergiria (0.7813), entao aqui o Java usa `BigDecimal` com `RoundingMode.HALF_EVEN` para dar exatamente a mesma saida das outras linguagens.
