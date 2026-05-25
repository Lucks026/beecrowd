# 1061 - Event Time

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1061

## Descricao

Le dois timestamps (dia + hora:min:seg) e calcula a duracao do evento em dias, horas, minutos e segundos.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Logica

Converte os dois horarios pra segundos totais, subtrai um do outro e depois divide de volta pra dias (86400), horas (3600), minutos (60) e segundos usando divisao inteira e resto.

## Java vs C++

No Java usei sc.next() pra pular o texto "Dia" e ":" que vem na entrada. No C++ usei uma string lixo e um char pra consumir esses mesmos caracteres. A logica matematica eh a mesma.
