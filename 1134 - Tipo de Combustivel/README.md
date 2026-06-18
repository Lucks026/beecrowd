# 1134 - Tipo de Combustivel

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1134

## Descricao

Le codigos de combustivel (1-Alcool, 2-Gasolina, 3-Diesel, 4-Fim). Conta quantos clientes de cada tipo e encerra ao ler 4. No fim imprime "MUITO OBRIGADO" e os totais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Tres contadores. Loop do/while que le o codigo e incrementa o contador correspondente, parando ao ler 4. Codigos invalidos sao simplesmente ignorados. No fim, imprime a mensagem e os totais de cada combustivel.

## Java vs C++ vs Python

Java e C++ usam do/while (le ao menos uma vez). Python usa loop infinito com break ao ler 4. As labels de saida seguem o formato exato do enunciado.
