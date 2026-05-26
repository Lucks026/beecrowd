n1, n2 = map(float, input().split())
n3, n4 = map(float, input().split())
media = (n1*2 + n2*3 + n3*4 + n4*1) / 10.0
print("Media: {:.1f}".format(media))
if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    exame = float(input())
    print("Nota do exame: {:.1f}".format(exame))
    mf = (media + exame) / 2.0
    if mf >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: {:.1f}".format(mf))
