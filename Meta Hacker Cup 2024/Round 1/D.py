def to_binary_with_digits(value, num_digits):
    binary_str = bin(value)[2:]
    return binary_str.zfill(num_digits)

def num_decodings(s):
    mod = 998244353
    if not s or s[0] == '0':
        return 0

    n = len(s)
    dp = [0] * (n + 1)

    dp[0] = 1
    dp[1] = 1

    for i in range(2, n + 1):
        if s[i - 1] != '0':
            dp[i] += dp[i - 1]%mod
        two_digit = int(s[i - 2:i])
        if 10 <= two_digit <= 26:
            dp[i] += dp[i - 2]%mod

    return dp[n]%mod

def caso789(s):
    s = list(s)
    tam = len(s)
    if s[0] == '?':
        if s[1] in '789':
            s[0] = '1'
    for i in range(1, tam - 1):
        if s[i] == '?':
            if s[i + 1] in '789':
                s[i] = '1'

    return ''.join(s)

t = int(input())
caso = 0

mod = 998244353
for _ in range(t):
    caso += 1
    seq, a = input().split()
    a = int(a)
    seq = caso789(seq)

    print("Case #{}:".format(caso), end=" ")
    exp = seq.count('?')

    total = 2**exp

    ans = to_binary_with_digits(total -a, exp)

    tam = len(seq)

    j = 0
    fim = ""
    for i in range(tam):
        if seq[i] == '?':
            if(ans[j] == '0'):
                fim += '1'
            else:
                fim += '2'
            j += 1
        else:
            fim += seq[i]

    resp = num_decodings(fim)%mod
    print(fim, resp)




