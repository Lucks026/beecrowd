import sys

a, b = map(float, sys.stdin.read().split())
print("MEDIA = {:.5f}".format((3.5 * a + 7.5 * b) / 11.0))
