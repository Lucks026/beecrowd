import sys

dados = sys.stdin.read().split()
x, y = int(dados[0]), int(dados[1])
if x > y:
    x, y = y, x
soma = 0
for i in range(x, y + 1):
    if i % 13 != 0:
        soma += i
print(soma)
