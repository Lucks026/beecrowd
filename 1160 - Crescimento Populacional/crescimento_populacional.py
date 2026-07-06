t = int(input())
for _ in range(t):
    partes = input().split()
    pa, pb = int(partes[0]), int(partes[1])
    g1, g2 = float(partes[2]), float(partes[3])
    anos = 0
    while pa <= pb and anos < 101:
        pa += int(pa * g1 / 100)
        pb += int(pb * g2 / 100)
        anos += 1
    if anos > 100:
        print("Mais de 1 seculo.")
    else:
        print(f"{anos} anos.")
