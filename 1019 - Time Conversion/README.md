# 1019 - Time Conversion

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1019

## Descricao

Le um valor em segundos e converte para horas, minutos e segundos.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Horas: t / 3600. Minutos: (t % 3600) / 60. Segundos: t % 60. A ordem importa, cada calculo usa o resto do anterior.
