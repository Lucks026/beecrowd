renda = float(input())
if renda <= 2000.00:
    print("Isento")
else:
    imposto = 0.0
    if renda > 2000.00:
        imposto += (min(renda, 3000.00) - 2000.00) * 0.08
    if renda > 3000.00:
        imposto += (min(renda, 4500.00) - 3000.00) * 0.18
    if renda > 4500.00:
        imposto += (renda - 4500.00) * 0.28
    print("R$ {:.2f}".format(imposto))
