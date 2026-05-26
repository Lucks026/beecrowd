cod, qtd = map(int, input().split())
preco = [0, 4.00, 4.50, 5.00, 2.00, 1.50]
print("Total: R$ {:.2f}".format(qtd * preco[cod]))
