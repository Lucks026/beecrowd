# 1146 - Sequencias Crescentes

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1146

## Descricao

Le um valor X varias vezes ate ler zero. Para cada X, imprime a sequencia de 1 ate X, separada por espaco, sem espaco apos o ultimo numero.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop que le X e para ao receber zero. Para cada X, monta a sequencia de 1 a X juntando os numeros com espaco entre eles, sem espaco no final.

## Java vs C vs C++ vs Python

Java usa StringBuilder controlando o espaco, C++ imprime espaco so quando nao eh o ultimo, Python usa `" ".join(...)`. Todos sem espaco apos o ultimo valor. Em C, while(scanf==1) ate ler zero, controlando o espaco.
