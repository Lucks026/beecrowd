import sys

n = list(map(int, sys.stdin.read().split()))[:20]
n = n[::-1]
for i in range(20):
    print(f"N[{i}] = {n[i]}")
