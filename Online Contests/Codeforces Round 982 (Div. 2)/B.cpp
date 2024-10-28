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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int custo = INF;
        for(auto &i : a) cin >> i;

        multiset<int> conj; 
        for(int i = n-1; i >= 0; i--){
            auto it = conj.upper_bound(a[i]);
            int count = distance(it, conj.end());
            conj.insert(a[i]);
            custo = min(custo, count+i);
        }
        cout << custo << endl;

    }

    return 0;
}
