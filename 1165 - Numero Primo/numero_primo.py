n = int(input())
for _ in range(n):
    x = int(input())
    primo = x > 1
    i = 2
    while i * i <= x:
        if x % i == 0:
            primo = False
            break
        i += 1
    if primo:
        print(f"{x} eh primo")
    else:
        print(f"{x} nao eh primo")
