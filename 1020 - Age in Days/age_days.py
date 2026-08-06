n = int(input())
print(f"{n // 365} ano(s)")
print(f"{(n % 365) // 30} mes(es)")
print(f"{(n % 365) % 30} dia(s)")
