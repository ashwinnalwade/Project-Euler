t = int(raw_input().strip())
for i in range(t):
    n = int(raw_input().strip())
    fac = 1
    for j in range(1,n+1): fac = fac * j
    sol = 0
    while fac > 0:
        sol = sol + fac % 10
        fac = fac // 10
    print(sol)
