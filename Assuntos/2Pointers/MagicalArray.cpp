/*
Magical Array

Codeforces: https://codeforces.com/contest/84/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(ll i = a; i < n; i++)
#define int long long

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _
    int n; cin>>n;
    int el, last, qtd, ans;
    qtd = 1;
    ans = 0;
    cin>>el;
    last = el;
    FOR(i,1,n){
        cin>>el;
        if(el == last)
            qtd++;
        else{
            ans += ((1+qtd)*qtd)/2;
            qtd=1;
            last = el;
        }
        if(i == n-1)
            ans += ((1+qtd)*qtd)/2;
    }
    cout<<ans<<'\n';

    return 0;
}

