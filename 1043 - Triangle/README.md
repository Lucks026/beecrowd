# 1043 - Triangle

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1043

## Descricao

Le tres valores reais A, B e C. Se formam um triangulo, imprime o perimetro ("Perimetro = X.X"). Caso contrario, imprime a area do trapezio de bases A e B e altura C ("Area = X.X"). Saida com 1 casa decimal.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Condicao de triangulo: cada lado menor que a soma dos outros dois. Se valido, perimetro = A+B+C. Se invalido, area do trapezio = ((A+B)*C)/2.

## Java vs C++ vs Python

Identicos nos tres. Java usa Locale.US e printf, C++ usa printf, Python usa format. So muda a sintaxe de saida.
