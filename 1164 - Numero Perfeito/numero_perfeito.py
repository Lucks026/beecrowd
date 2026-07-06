n = int(input())
for _ in range(n):
    x = int(input())
    soma = 0
    i = 1
    while i * i <= x:
        if x % i == 0:
            if i < x:
                soma += i
            j = x // i
            if j != i and j < x:
                soma += j
        i += 1
    if x > 0 and soma == x:
        print(f"{x} eh perfeito")
    else:
        print(f"{x} nao eh perfeito")
