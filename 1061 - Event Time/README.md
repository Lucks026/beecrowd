# 1061 - Event Time

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1061

## Descricao

Le dois timestamps (dia + hora:min:seg) e calcula a duracao do evento em dias, horas, minutos e segundos.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Converte os dois horarios pra segundos totais, subtrai um do outro e depois divide de volta pra dias (86400), horas (3600), minutos (60) e segundos usando divisao inteira e resto.

## Java vs C vs C++ vs Python

No Java usei sc.next() pra pular o texto "Dia" e ":". No C++ usei string lixo e char. No Python leio a linha "Dia D" e a linha do horario separadamente, trocando ":" por espaco antes do split. A logica matematica eh a mesma. Em C leio 'Dia %d' e ' %d : %d : %d' direto no scanf.
