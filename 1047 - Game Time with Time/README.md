# 1047 - Game Time with Time

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1047

## Descricao

Igual ao 1046, mas com horas e minutos. Se horarios iguais, durou 24h e 0min.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Converto tudo para minutos: hora * 60 + minuto. Mesma logica do 1046 mas o ciclo e 1440 minutos. Na saida divido por 60 para horas e uso % para os minutos restantes.

## Java vs C vs C++ vs Python

Identicos nos tres em logica. Python usa // pra divisao inteira e % pro resto. Em C converto tudo para minutos e volto, igual aos outros.
