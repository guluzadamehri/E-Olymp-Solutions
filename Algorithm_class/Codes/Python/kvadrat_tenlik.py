a, b, c = map(float, input().split())
d = b*b - 4*a*c
if d < 0: print("Kok yoxdur")
elif d == 0: print("Tek kok:", -b / (2*a))
else:
    x1 = (-b - d**0.5) / (2*a)
    x2 = (-b + d**0.5) / (2*a)
    print(x1, x2)
