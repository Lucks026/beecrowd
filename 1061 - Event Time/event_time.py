d1 = int(input().split()[1])
h1, m1, s1 = map(int, input().replace(":", " ").split())
d2 = int(input().split()[1])
h2, m2, s2 = map(int, input().replace(":", " ").split())
total = (d2 * 86400 + h2 * 3600 + m2 * 60 + s2) - (d1 * 86400 + h1 * 3600 + m1 * 60 + s1)
print(f"{total // 86400} dia(s)")
total %= 86400
print(f"{total // 3600} hora(s)")
total %= 3600
print(f"{total // 60} minuto(s)")
print(f"{total % 60} segundo(s)")
