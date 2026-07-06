import sys

for linha in sys.stdin:
    linha = linha.strip()
    if not linha:
        continue
    x = int(linha)
    if x == 0:
        break
    if x % 2 != 0:
        x += 1
    soma = 0
    for i in range(5):
        soma += x + 2 * i
    print(soma)
