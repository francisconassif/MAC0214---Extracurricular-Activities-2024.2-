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

signed main(){ _
    ll t, n, x, y, ans;
    cin >> t;
    while(t--){
        cin>>n;
        ll prefix = 0;
        if(n >= 3){
            FOR(i,0,n-2){
                cin>>x;
                prefix += x;
            }
        }
        cin>>x>>y;
        x -= prefix;
        y -= x;
        cout<<y<<'\n';
    }

    return 0;
}


