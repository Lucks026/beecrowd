# 1094 - Experiencias

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1094

## Descricao

Le N experiencias, cada uma com a quantidade de cobaias e o tipo (C para coelho, R para rato, S para sapo). Imprime o total geral, total por tipo e o percentual de cada tipo com 2 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Tres contadores acumuladores, um para cada tipo. A cada iteracao, le qtd e tipo e soma no contador certo. No final calcula o total (soma dos tres) e o percentual de cada um como (contador * 100 / total).

## Java vs C vs C++ vs Python

Java usa `Locale.US` no `printf` para imprimir decimal com ponto. C++ usa `printf` direto. Python usa f-string com `:.2f`. O sinal `%` precisa ser escapado nos formatadores (em Java/C++ usa `%%`, em Python o `%` literal funciona dentro da f-string). Em C uso scanf("%d %c") pra ler quantidade e tipo, e printf com %.2f e %% pro percentual.
