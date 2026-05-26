# 1048 - Salary Increase

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1048

## Descricao

Le um salario e aplica o reajuste conforme a faixa salarial (4% a 15%).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

If/else percorre as faixas de baixo pra cima. O calculo usa reajuste/100.0 com .0 para forcar divisao real, nao inteira.

## Java vs C++ vs Python

Em C++ usei cout com fixed e setprecision(2), em Java usei printf. Python usa format() com :.2f. O resultado e o mesmo.
