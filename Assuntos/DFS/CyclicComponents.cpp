/*
Cyclic Components - Source: https://codeforces.com/contest/977/problem/E
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

signed main() { _
    int n,m; cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> deg(n,0);

    FOR(i,0,m){
        int v,u; cin >> v >> u;
        v--; u--;
        adj[v].push_back(u);
        adj[u].push_back(v);
        deg[v]++;
        deg[u]++;
    }

    vector<bool> visited(n,false);

    int cycle_count = 0;

    FOR(start,0,n){
        if (!visited[start]) {
            if (adj[start].empty()) {
                visited[start] = true;
                continue;
            }

            vector<int> comp;
            stack<int> st; 
            st.push(start);
            visited[start] = true;

            while(!st.empty()){
                int cur = st.top(); st.pop();
                comp.push_back(cur);

                for (auto nxt : adj[cur]) {
                    if (!visited[nxt]) {
                        visited[nxt] = true;
                        st.push(nxt);
                    }
                }
            }

            ll sum_deg = 0;
            bool all_deg_2 = true;
            for (auto v : comp) {
                sum_deg += deg[v];
                if (deg[v] != 2) all_deg_2 = false;
            }

            int V = (int)comp.size();
            int E = (int)(sum_deg/2);

            if (V >= 3 && V == E && all_deg_2) {
                cycle_count++;
            }
        }
    }

    cout << cycle_count << "\n";

    return 0;
}
