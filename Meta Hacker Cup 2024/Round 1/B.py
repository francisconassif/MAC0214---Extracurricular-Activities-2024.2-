from sympy import isprime

t = int(input())
caso = 0

solution = []
solution.append(0)
solution.append(0)
solution.append(1)
for i in range(3,10000001):
    if isprime(i) and isprime(i-2):
        solution.append(solution[-1]+1)
    else:
        solution.append(solution[-1])


for _ in range(t):
    caso += 1
    n = int(input())
    print("Case #{}:".format(caso), end=" ")
    print(solution[n])
    
