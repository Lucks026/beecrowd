salario = float(input())
if salario <= 400.00:
    reajuste = 15
elif salario <= 800.00:
    reajuste = 12
elif salario <= 1200.00:
    reajuste = 10
elif salario <= 2000.00:
    reajuste = 7
else:
    reajuste = 4
print("Novo salario: {:.2f}".format(salario * (1 + reajuste / 100.0)))
print("Reajuste ganho: {:.2f}".format(salario * reajuste / 100.0))
print("Em percentual: {} %".format(reajuste))
