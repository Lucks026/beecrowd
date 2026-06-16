import sys

for linha in sys.stdin:
    partes = linha.split()
    if len(partes) < 2:
        continue
    x, y = int(partes[0]), int(partes[1])
    if x == y:
        break
    if x < y:
        print("Crescente")
    else:
        print("Decrescente")
