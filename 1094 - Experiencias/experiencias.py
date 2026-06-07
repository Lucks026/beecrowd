n = int(input())
coelhos = ratos = sapos = 0
for _ in range(n):
    partes = input().split()
    qtd = int(partes[0])
    tipo = partes[1]
    if tipo == 'C':
        coelhos += qtd
    elif tipo == 'R':
        ratos += qtd
    elif tipo == 'S':
        sapos += qtd
total = coelhos + ratos + sapos
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {(coelhos * 100 / total):.2f} %")
print(f"Percentual de ratos: {(ratos * 100 / total):.2f} %")
print(f"Percentual de sapos: {(sapos * 100 / total):.2f} %")
