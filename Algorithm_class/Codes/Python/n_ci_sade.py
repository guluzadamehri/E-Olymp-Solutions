n = int(input())
say, eded = 0, 1
while say < n:
    eded += 1
    yoxla = True
    for i in range(2, int(eded**0.5) + 1):
        if eded % i == 0:
            yoxla = False
            break
    if yoxla: say += 1
print(eded)
