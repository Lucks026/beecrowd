ih, im, fh, fm = map(int, input().split())
ini = ih * 60 + im
fim = fh * 60 + fm
if fim <= ini:
    fim += 1440
dur = fim - ini
if dur == 0:
    dur = 1440
print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(dur // 60, dur % 60))
