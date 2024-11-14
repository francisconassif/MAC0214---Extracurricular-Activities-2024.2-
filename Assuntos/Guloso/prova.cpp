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
    int t; cin >> t; 
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(n);
        FOR(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());
        int soma = 2*a[n-1]+1;
        for(int i = n - 2; i > 0; i--){
            soma += a[i] + 1;
        }
        soma++;
        if(soma <= m) cout<< "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
