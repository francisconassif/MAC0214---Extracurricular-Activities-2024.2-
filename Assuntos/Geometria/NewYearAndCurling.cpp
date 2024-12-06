/*
New Year and Curling - Source: https://codeforces.com/contest/908/problem/C
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
typedef long double ld;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _

    int n, r;
    cin >> n >> r;
    vector<int> x(n);
    FOR(i,0,n){
        cin >> x[i];
    }

    vector<ld> Y(n, 0.0L);

    FOR(i,0,n){
        ld bestY = r; 
        FOR(j,0,i){
            ld dx = fabsl(x[i] - x[j]);
            if (dx <= 2*r) {
                ld h = sqrtl((ld)(4LL * r * r) - dx * dx);
                ld candidate = Y[j] + h;
                if (candidate > bestY) {
                    bestY = candidate;
                }
            }
        }
        Y[i] = bestY;
    }

    cout<<fixed<<setprecision(9);
              
    FOR(i,0,n){
        cout << (ld)Y[i] << ' ';
    }
    cout << '\n';

    return 0;
}
