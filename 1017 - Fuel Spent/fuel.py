import sys

tempo, velocidade = map(float, sys.stdin.read().split())
print("{:.3f}".format(tempo * velocidade / 12.0))
