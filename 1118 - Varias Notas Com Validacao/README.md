# 1118 - Varias Notas Com Validacao

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1118

## Descricao

Extensao do 1117. Le duas notas validas (intervalo [0, 10]), imprime a media e pergunta "novo calculo (1-sim 2-nao)". Repete enquanto a resposta for 1; para quando for 2.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C         | Accepted |
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop externo de calculos. Dentro, o mesmo esquema do 1117 para validar duas notas e imprimir a media. Depois, um loop interno que insiste na pergunta "novo calculo" ate receber 1 ou 2. Se 2, encerra o programa.

## Java vs C vs C++ vs Python

Mesma base do 1117 com `Locale.US` no Java. O controle do menu usa do/while em Java e C++, e while com checagem em Python. A pergunta eh reimpressa enquanto a opcao nao for 1 nem 2. Em C, laco externo com o menu do/while e scanf/printf.
