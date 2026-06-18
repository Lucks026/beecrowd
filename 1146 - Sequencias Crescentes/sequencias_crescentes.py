import sys

for linha in sys.stdin:
    linha = linha.strip()
    if not linha:
        continue
    x = int(linha)
    if x == 0:
        break
    print(" ".join(str(i) for i in range(1, x + 1)))
