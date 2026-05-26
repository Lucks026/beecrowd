valor = float(input())
n = round(valor * 100)
notas = [10000, 5000, 2000, 1000, 500, 200]
moedas = [100, 50, 25, 10, 5, 1]
nNotas = ["100.00","50.00","20.00","10.00","5.00","2.00"]
nMoedas = ["1.00","0.50","0.25","0.10","0.05","0.01"]
print("NOTAS:")
for i in range(6):
    print("{} nota(s) de R$ {}".format(n // notas[i], nNotas[i]))
    n %= notas[i]
print("MOEDAS:")
for i in range(6):
    print("{} moeda(s) de R$ {}".format(n // moedas[i], nMoedas[i]))
    n %= moedas[i]
