import math
a, b, c = map(float, input().split())
delta = b*b - 4*a*c
if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    print("R1 = {:.5f}".format((-b + math.sqrt(delta)) / (2*a)))
    print("R2 = {:.5f}".format((-b - math.sqrt(delta)) / (2*a)))
