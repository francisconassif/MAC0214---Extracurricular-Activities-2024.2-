#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define int long long

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;




void solve(){

}

signed main(){ _
    int t; cin>>t;
    while(t--){
        int x, y, k; cin>>x>>y>>k;
        int passosx = x/k;
        int passosy = y/k;
        if(x%k!=0)passosx++;
        int ans =0;
        if(y%k!=0)passosy++;
        if(passosy>=passosx) ans = 2*passosy;
        else ans = 2*passosx-1;
        cout<<ans<<'\n';
    }

    return 0;
}
