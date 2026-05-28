maior = int(input())
pos = 1
for i in range(2, 101):
    x = int(input())
    if x > maior:
        maior = x
        pos = i
print(maior)
print(pos)
