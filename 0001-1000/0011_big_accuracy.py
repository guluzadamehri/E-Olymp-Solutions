import sys

s = sys.stdin.read().split()
if len(s) >= 3:
    m = int(s[0])
    n = int(s[1])
    k = int(s[2])
    
    # Tam hissəni tapırıq
    tam = m // n
    print(tam, end="")
    print(".", end="")
    
    # Qalıqla nöqtədən sonrakı k rəqəmi hesablayırıq
    qaliq = m % n
    for i in range(k):
        qaliq *= 10
        rəqəm = qaliq // n
        print(rəqəm, end="")
        qaliq %= n
    print()
