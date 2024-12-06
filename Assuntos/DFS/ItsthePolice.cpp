/*
It's the police - Source: https://codeforces.com/gym/101149/problem/I
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
    int n,m; cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> deg(n,0);

    FOR(i,0,m){
        int a,b; cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }

    int v_min = 0;
    FOR(i,1,n){
        if (deg[i] < deg[v_min]) {
            v_min = i;
        }
    }

    vector<int> result(n,1);
    result[v_min] = 0;
    for (auto u : adj[v_min]) {
        result[u] = 0;
    }

    FOR(i,0,n){
        cout << result[i] << ' ';
    }
    cout << '\n';

    return 0;
}
