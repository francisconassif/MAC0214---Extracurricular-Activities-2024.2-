#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

map<ll,vector<ll>> filhos;
map<ll,ll> pais;
map<pair<int,int>,int> memo;


ll pai(ll v, ll p){
    ll anc = pais[v];
    p--;
    while(p>0){
        anc = pais[anc];
        if (anc==0) break;
        p--;
    }
    return anc; 
}

ll contafilhos(ll anc, ll p){
    if(p == 1){
        return filhos[anc].size();
    }
    if(memo.find({anc,p}) != memo.end()) return memo[{anc,p}];
    ll ans = 0;
    for(auto filho: filhos[anc]){
        ans += contafilhos(filho,p-1);
    }
    return memo[{anc,p}] = ans;
}

ll conta(ll v, ll p){
    ll anc = pai(v,p);
    if (anc == 0) return 0;
    ll ans = contafilhos(anc,p);
    return ans;
}



int main(){ _
    cout<<fixed;
    int n; cin>>n;
    ll a;
    ll ind = 0;
    while(n--){
        ind++;
        cin>>a;
        if(a!=0) filhos[a].pb(ind);
        pais[ind] = a;
    }
    int m; cin>>m;
    ll v,p;
    ll ans;
    while(m--){
        cin>>v>>p;
        ans = conta(v,p);
        if (ans>0) ans--;
        cout<<ans<<' ';
    }
    cout<<endl;
    return 0;
}
