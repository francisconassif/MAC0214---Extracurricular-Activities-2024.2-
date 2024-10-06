mod = 998244353
t = int(input())
caso = 0

for _ in range(t):
    caso += 1
    a,b,c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    print("Case #{}:".format(caso), end=" ")
    mult = 2*c + 1
    res = (a-b) % mod
    res = (res * mult) % mod
    print(res)
