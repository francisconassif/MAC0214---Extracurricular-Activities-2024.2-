t = int(input())
for i in range(t):
    np = input().split(sep=' ')
    n = int(np[0])
    p = int(np[1])/100
    newp = p**((n-1)/n)
    print("Case #", i+1,": ",100*newp - 100*p, sep='')
