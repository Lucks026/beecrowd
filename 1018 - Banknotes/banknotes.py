n = int(input())
print(n)
for nota in [100, 50, 20, 10, 5, 2, 1]:
    print("{} nota(s) de R$ {},00".format(n // nota, nota))
    n %= nota
