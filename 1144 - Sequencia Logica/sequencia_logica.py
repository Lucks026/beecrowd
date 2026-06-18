n = int(input())
for i in range(1, n + 1):
    quad = i * i
    cubo = i * i * i
    print(f"{i} {quad} {cubo}")
    print(f"{i} {quad + 1} {cubo + 1}")
