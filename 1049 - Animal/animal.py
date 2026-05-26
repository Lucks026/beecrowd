t1 = input().strip()
t2 = input().strip()
t3 = input().strip()
if t1 == "vertebrado":
    if t2 == "ave":
        if t3 == "carnivoro":
            print("aguia")
        else:
            print("pomba")
    else:
        if t3 == "onivoro":
            print("homem")
        else:
            print("vaca")
else:
    if t2 == "inseto":
        if t3 == "hematofago":
            print("pulga")
        else:
            print("lagarta")
    else:
        if t3 == "hematofago":
            print("sanguessuga")
        else:
            print("minhoca")
