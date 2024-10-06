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
    int caso = 0;
    while(t--){
        caso++;
        int n; cin >> n;
        vector<int> a(n); 
        vector<int> b(n);
        double speed = 0;
        bool ans = false;
        FOR(i, 0, n){
            cin >> a[i] >> b[i];
            speed = max(speed, (double) (i+1)/b[i]);
        }
        FOR(i, 0, n){
            if (((double) speed*(a[i])) > i+1){
                cout<<"Case #"<<caso<<": -1\n";
                ans = true; 
                break;
            }
        }
        if(!ans) cout<<"Case #"<<caso<<": "<<fixed<<setprecision(6)<<speed<<'\n';
    }

    return 0;
}
