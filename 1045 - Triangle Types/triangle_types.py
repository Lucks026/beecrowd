a, b, c = map(float, input().split())
if a < b + c and b < a + c and c < a + b:
    arr = sorted([a, b, c])
    x, y, z = arr[0], arr[1], arr[2]
    if z*z == x*x + y*y:
        print("Retangulo")
    elif z*z > x*x + y*y:
        print("Obtusangulo")
    else:
        print("Acutangulo")
else:
    print("Invalido")
