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
    int t, n, x, y, ans;
    cin >> t;
    while(t--){
        cin>>n>>x>>y;
        if(x > y){
            ans = n/y;
            if(n%y != 0) ans++;
            cout<<ans<<'\n';
        }
        else{
            ans = n/x;
            if(n%x != 0) ans++;
            cout<<ans<<'\n';
        }
    }

    return 0;
}


