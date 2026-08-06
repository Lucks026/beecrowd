import sys

vals = list(map(float, sys.stdin.read().split()))
for i in range(100):
    v = vals[i]
    if v <= 10:
        print(f"A[{i}] = {v:.1f}")
