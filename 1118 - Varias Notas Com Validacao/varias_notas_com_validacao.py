while True:
    notas = []
    while len(notas) < 2:
        nota = float(input())
        if 0 <= nota <= 10:
            notas.append(nota)
        else:
            print("nota invalida")
    media = (notas[0] + notas[1]) / 2
    print(f"media = {media:.2f}")
    opcao = 0
    while opcao != 1 and opcao != 2:
        print("novo calculo (1-sim 2-nao)")
        opcao = int(input())
    if opcao == 2:
        break
