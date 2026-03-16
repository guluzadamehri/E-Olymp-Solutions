import math

x1, y1, r1, x2, y2, r2 = map(float, input().split())
d = math.sqrt((x1-x2)**2 + (y1-y2)**2)

if x1 == x2 and y1 == y2 and r1 == r2:
    print(-1)
elif d > r1 + r2 or d < abs(r1 - r2):
    print(0)
elif d == r1 + r2 or d == abs(r1 - r2):
    print(1)
else:
    print(2)
