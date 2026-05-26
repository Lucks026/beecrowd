ini, fim = map(int, input().split())
if fim <= ini:
    dur = 24 - ini + fim
else:
    dur = fim - ini
if dur == 0:
    dur = 24
print("O JOGO DUROU {} HORA(S)".format(dur))
