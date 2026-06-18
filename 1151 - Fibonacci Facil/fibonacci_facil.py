n = int(input())
a, b = 0, 1
fib = []
for _ in range(n):
    fib.append(str(a))
    a, b = b, a + b
print(" ".join(fib))
