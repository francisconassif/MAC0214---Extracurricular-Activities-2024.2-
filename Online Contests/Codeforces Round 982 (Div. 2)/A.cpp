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
        int qtd; cin >> qtd; 
        int maxw = 0;
        int maxh = 0;
        while(qtd--){
            int w, h; cin >> w >> h;
            maxw = max(maxw, w);
            maxh = max(maxh, h);
        }
        int ans = 2*(maxw+maxh);
        cout<<ans<<endl;
    }

    return 0;
}
