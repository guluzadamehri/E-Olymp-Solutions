x, y = map(int, input().split())
a, b = x, y
while b:
    a, b = b, a % b
ebob = a
ekob = (x * y) // ebob
print(ebob, ekob)
