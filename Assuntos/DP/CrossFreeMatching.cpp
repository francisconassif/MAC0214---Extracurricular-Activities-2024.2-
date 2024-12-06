/*
Cross-free Matching - Source: https://atcoder.jp/contests/arc126/tasks/arc126_b
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

signed main(){ _
    int n, m; cin >> n >> m;
    vector<pair<int,int>> conj(m);
    FOR(i,0,m){
        cin >> conj[i].f >> conj[i].s;
    }
    
    sort(conj.begin(), conj.end(), [](const pair<int, int>& a, const pair<int, int>& b) -> bool{
        if(a.f != b.f)
            return a.f < b.f;  
        return a.s > b.s;     
    });

    vector<int> fim;
    for(auto cabo : conj){
        fim.pb(cabo.s);
    }

    vector<int> escolhidos;

    for(auto const &x : fim){
        auto pos = lower_bound(escolhidos.begin(), escolhidos.end(), x);
        if(pos == escolhidos.end()){
            escolhidos.pb(x);
        }
        else{
            *pos = x;
        }
    }

    cout << escolhidos.size() << '\n';

    return 0;
}
