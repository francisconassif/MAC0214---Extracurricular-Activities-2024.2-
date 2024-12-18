/*
Popcorn - Source: https://codeforces.com/gym/101147/problem/D
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

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll comb(int n, int k){
    if(k > n) return 0;
    if(k > n - k) k = n - k; 
    ll result = 1;
    FOR(i,1,k+1){
        result = result * (n - i + 1) / i;
    }
    return result;
}

signed main(){ _

    freopen("popcorn.in", "r", stdin);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        cout << comb(n, m) << "\n";
    }

    return 0;
}
