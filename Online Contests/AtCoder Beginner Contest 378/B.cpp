#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;




void solve(){

}

signed main(){ _
    int n; cin >> n;
    vector<int> q(n);
    vector<int> r(n);
    FOR(i, 0, n) cin >> q[i] >> r[i];
    int Q; cin >> Q;
    FOR(i, 0, Q){
        int x; cin >> x; 
        int y; cin >> y;
        x--;
        int ans = y % q[x];
        if(ans > r[x]){
            cout << y + q[x] - ans + r[x] << endl;
        }
        else{
            cout << y + r[x] - ans << endl;
        }
    }
    

    return 0;
}
