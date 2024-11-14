#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(ll i = a; i < n; i++)
#define int long long 

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _
    cout << fixed;
    int n, m, k; cin >> n >> m >> k;
    multiset<int> dif; 
    int x; cin >> x; 
    int y, ant = x;
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    if(n == 2){
        cin >> y; 
        if(k >= 2){
            cout << "2\n";
            return 0;
        }
        else{
            cout << y - x + 1 << "\n";
            return 0;
        }
    }
    FOR(i, 1, n-1){
        cin >> y;
        dif.insert(y - ant);
        ant = y;
    }
    cin >> y; 
    dif.insert(y - ant);
    int total = y - x + 1;
    if(k >= n){
        cout << n << "\n";
        return 0;
    }
    FOR(i, 1, k){
        total -= *dif.rbegin() - 1;
        dif.erase(dif.find(*dif.rbegin()));
    }
    cout << total << endl;
    
    return 0;
}
