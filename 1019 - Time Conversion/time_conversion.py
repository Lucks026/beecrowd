t = int(input())
print("{} hora(s)".format(t // 3600))
print("{} minuto(s)".format((t % 3600) // 60))
print("{} segundo(s)".format(t % 60))
