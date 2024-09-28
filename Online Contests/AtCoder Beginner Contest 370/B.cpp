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
    int n; cin>>n;
    vector<vector<int>> matriz(n,vector<int>(n));
    FOR(i,0,n){
        FOR(j,0,i+1){
            cin>>matriz[i][j];
        }
    }
    int ans = matriz[0][0];
    FOR(i,2,n+1){
        if(ans >= i){
            ans = matriz[ans-1][i-1];
        }
        else{
            ans = matriz[i-1][ans-1];
        }
    }
    cout<<ans<<'\n';

    return 0;
}
