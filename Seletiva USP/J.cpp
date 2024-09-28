#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define dbg(x) cout << #x << " = " << x << '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)

#define int long long
const int INF = 0x3f3f3f3f;


signed main(){ _
    set<int> keys;
    map<int,int> pares;
    int n; cin >> n;
    int n_c = n;
    int min_v = 0;
    while (n--) {
        int v; cin >> v;
        keys.insert(v);
        if(pares.find(v)!=pares.end()) pares[v]++;
        else pares[v] = 1;
    }
    int res;
    for (auto& key : keys) {
        if (key*n_c > min_v) {
            res = key;
            min_v = key*n_c;
        }
        
        n_c -= pares[key];
        
    }

    cout << res << " " << min_v << endl;
    return 0;
}
