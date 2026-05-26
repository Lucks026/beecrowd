line1 = input().split()
d1, h1, m1, s1 = int(line1[1]), int(line1[2]), int(line1[4]), int(line1[6])
line2 = input().split()
d2, h2, m2, s2 = int(line2[1]), int(line2[2]), int(line2[4]), int(line2[6])
total = (d2*86400 + h2*3600 + m2*60 + s2) - (d1*86400 + h1*3600 + m1*60 + s1)
dias = total // 86400
total %= 86400
horas = total // 3600
total %= 3600
minutos = total // 60
segundos = total % 60
print("{} dia(s)".format(dias))
print("{} hora(s)".format(horas))
print("{} minuto(s)".format(minutos))
print("{} segundo(s)".format(segundos))
