/*
Cthulhu - Source: https://codeforces.com/problemset/problem/104/C
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

    if (m != n || n < 3) {
        FOR(i,0,m){
            int x,y; cin >> x >> y; 
        }
        cout << "NO\n";
        return 0;
    }

    vector<vector<int>> adj(n);
    FOR(i,0,m){
        int x,y; cin >> x >> y;
        x--; y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    vector<bool> visited(n,false);
    int countVisit = 0;
    stack<int> st;
    st.push(0);
    visited[0]=true;
    while(!st.empty()){
        int cur=st.top(); st.pop();
        countVisit++;
        for (auto nxt : adj[cur]) {
            if (!visited[nxt]) {
                visited[nxt]=true;
                st.push(nxt);
            }
        }
    }

    if (countVisit == n) cout << "FHTAGN!\n";
    else cout << "NO\n";

    return 0;
}
