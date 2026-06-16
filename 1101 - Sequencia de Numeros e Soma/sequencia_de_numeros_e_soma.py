import sys

for linha in sys.stdin:
    partes = linha.split()
    if len(partes) < 2:
        continue
    m, n = int(partes[0]), int(partes[1])
    if m <= 0 or n <= 0:
        break
    if m > n:
        m, n = n, m
    soma = 0
    for i in range(m, n + 1):
        print(i, end=" ")
        soma += i
    print(f"Sum={soma}")
