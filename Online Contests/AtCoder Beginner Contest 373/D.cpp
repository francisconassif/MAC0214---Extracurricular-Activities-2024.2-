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
    ll n, m;
    cin >> n >> m;

    vector<vector<pll>> adj(n);
    FOR(i,0,m){
        ll u, v;
        ll w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, -w});
    }

    vector<bool> assigned(n, false);
    vector<ll> x(n, 0);

    for (int i = 0; i < n; ++i){
        if (!assigned[i]) {
            assigned[i] = true;
            x[i] = 0;

            queue<int> q;
            q.push(i);

            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(auto& edge : adj[u]){
                    int v = edge.first;
                    ll w = edge.second;

                    if(!assigned[v]){
                        x[v] = x[u] + w;
                        assigned[v] = true;
                        q.push(v);
                    }
                }
            }
        }
    }

    FOR(i,0,n){
        cout << x[i] << ' ';
    }
    cout << '\n';

    return 0;
}


