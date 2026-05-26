a, b, c = map(float, input().split())
if a < b + c and b < a + c and c < a + b:
    print("Valido")
    if a == b == c:
        print("Equilatero")
    elif a == b or b == c or a == c:
        print("Isosceles")
    else:
        print("Escaleno")
else:
    print("Invalido")
