# 1045 - Triangle Types

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1045

## Descricao

Le tres lados. Se nao formam triangulo, imprime "NAO FORMA TRIANGULO". Caso contrario, classifica pelo angulo (RETANGULO/OBTUSANGULO/ACUTANGULO) e, quando for o caso, tambem pelos lados (EQUILATERO/ISOSCELES).

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Ordena os lados com o maior primeiro (A). Se A >= B+C, nao forma triangulo. Senao, compara A^2 com B^2+C^2 para achar o tipo de angulo e verifica os lados iguais para equilatero/isosceles. Pode imprimir duas linhas (angulo + lados).

## Java vs C++ vs Python

C++ usa sort(), Java usa Arrays.sort(), Python usa sorted(reverse=True). As mensagens saem em maiusculas com o prefixo TRIANGULO.
