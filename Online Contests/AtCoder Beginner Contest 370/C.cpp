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
    string a, b;
    cin>>a>>b;
    if(a == b){
        cout<<"0\n";
        return 0;
    }
    vector<string> x;
    FOR(i, 0, a.size()){
        if(b[i] < a[i]){
            a[i] = b[i];
            x.pb(a);
        }
        else if(a[i] == b[i]) continue;
        else{
            FOR(j,i+1,a.size()){
                if(b[j] < a[j]){
                    a[j] = b[j];
                    x.pb(a);
                }
                else continue;
            }
            for(int j = a.size()-1; j > i; j--){
                if(b[j]!=a[j]){
                    a[j]=b[j];
                    x.pb(a);
                }
            }
            a[i] = b[i];
            x.pb(a);
        }
    }
    cout<<x.size()<<'\n';
    for(auto el : x){
        cout<<el<<'\n';
    }
    
    return 0;
}
