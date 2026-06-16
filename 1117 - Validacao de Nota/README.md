# 1117 - Validacao de Nota

**Plataforma:** Beecrowd
**Dificuldade:** Iniciante
**Link:** https://judge.beecrowd.com/pt/problems/view/1117

## Descricao

Le notas reais ate obter duas validas (no intervalo [0, 10]). Para cada nota invalida, imprime "nota invalida". Quando tiver duas validas, imprime "media = " com a media das duas, com duas casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
| Python    | Accepted |

## Logica

Loop que conta notas validas. A cada leitura, verifica se esta entre 0 e 10. Se valida, guarda e incrementa o contador; se invalida, imprime a mensagem. Ao chegar em duas validas, calcula e imprime a media.

## Java vs C++ vs Python

Java usa `Scanner.useLocale(Locale.US)` para ler decimais com ponto e `printf(Locale.US)` na saida. C++ usa `printf("%.2f")`. Python usa f-string com `:.2f`. A validacao do intervalo eh identica nos tres.
