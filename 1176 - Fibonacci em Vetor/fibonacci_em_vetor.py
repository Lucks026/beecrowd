import sys

data = sys.stdin.read().split()
fib = [0, 1]
for i in range(2, 61):
    fib.append(fib[i - 1] + fib[i - 2])
t = int(data[0])
for k in range(1, t + 1):
    n = int(data[k])
    print(f"Fib({n}) = {fib[n]}")
