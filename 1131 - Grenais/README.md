# 1131 - Grenais

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1131

## Descricao

Le os gols de Inter e Gremio em varios grenais. Apos cada um, pergunta "Novo grenal (1-sim 2-nao)". Ao terminar, imprime o total de grenais, vitorias de cada time, empates e quem venceu mais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Contadores para grenais, vitorias do Inter, vitorias do Gremio e empates. A cada partida, compara os gols e incrementa o contador certo. Continua enquanto a resposta for 1. No fim, imprime as estatisticas e compara as vitorias para decidir o vencedor (ou "Nao houve vencedor" no empate).

## Java vs C vs C++ vs Python

Java e C++ usam do/while (sempre le ao menos um grenal). Python usa loop infinito com break quando a opcao nao eh 1. As mensagens de saida seguem exatamente o formato do enunciado. Em C, do/while com scanf lendo os gols e a opcao.
