# 1156 - Sequencia S II

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1156

## Descricao

Sem entrada. Calcula e imprime o valor de S, onde S = 1/1 + 3/2 + 5/4 + 7/8 + ... + 39/2^19, com duas casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

O numerador segue os numeros impares (1, 3, 5, ..., 39) e o denominador segue as potencias de 2 (1, 2, 4, 8, ...). Inicia S com o primeiro termo (1/1 = 1) e, a cada passo, soma o proximo impar dividido pela potencia de 2 atual, dobrando o denominador. A serie converge para 6 e, com os 20 termos, o resultado arredonda para 6.00.

## Java vs C++ vs Python

Atencao a divisao em ponto flutuante: o denominador eh mantido como double para nao truncar. Java usa `Locale.US` no printf, C++ usa `printf("%.2f")`, Python usa f-string com `:.2f`.
