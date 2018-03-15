from math import factorial
for _ in range (input()):
    a,b=[int(x) for x in raw_input().split()]
    print ((factorial(a+b)/factorial(b))/factorial(a))%((10**9)+7)
