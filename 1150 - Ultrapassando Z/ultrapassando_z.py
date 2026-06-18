import sys

dados = list(map(int, sys.stdin.read().split()))
idx = 0
x = dados[idx]; idx += 1
z = dados[idx]; idx += 1
while z <= x:
    z = dados[idx]; idx += 1
soma = 0
atual = x
qtd = 0
while soma <= z:
    soma += atual
    atual += 1
    qtd += 1
print(qtd)
