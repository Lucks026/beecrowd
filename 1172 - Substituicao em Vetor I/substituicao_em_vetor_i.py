import sys

dados = sys.stdin.read().split()
for i in range(10):
    x = int(dados[i])
    if x <= 0:
        x = 1
    print(f"X[{i}] = {x}")
