import sys

for linha in sys.stdin:
    partes = linha.split()
    if len(partes) < 2:
        continue
    x, y = int(partes[0]), int(partes[1])
    if x == 0 or y == 0:
        break
    if x > 0 and y > 0:
        print("primeiro")
    elif x < 0 and y > 0:
        print("segundo")
    elif x < 0 and y < 0:
        print("terceiro")
    else:
        print("quarto")
