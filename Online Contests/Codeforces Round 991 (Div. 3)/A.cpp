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
        int n, m; cin >> n >> m;
        int cnt = 0;
        bool fim = false; 
        while(n--){
            string pal; cin >> pal;
            int tam = pal.length();
            if(!fim && m-tam >=0){
                m-=tam;
                cnt++;
            }
            else fim = true;
        }
        cout << cnt << endl;
    }

    return 0;
}
