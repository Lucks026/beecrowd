# 1017 - Fuel Spent

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1017

## Descricao

Le o tempo (horas) e a velocidade media (km/h). O carro faz 12 km por litro. Calcula os litros gastos: (tempo * velocidade) / 12. Saida com 3 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Distancia = tempo * velocidade. Litros = distancia / 12. A saida eh so o numero com %.3f, sem nenhum texto ao lado.

## Java vs C vs C++ vs Python

C, C++ e Java imprimem com printf e %.3f (Java com Locale.US para ler com ponto); Python usa format com :.3f.
