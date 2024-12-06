/*
Airport - Source: https://neps.academy/exercise/290
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main() { _

    int A, V;
    int testCount = 1;
    while (true) {
        cin >> A >> V;
        if (!cin || A == 0 && V == 0) break;

        vector<int> traffic(A,0);

        FOR(i,0,V){
            int X, Y; cin >> X >> Y;
            traffic[X-1]++;
            traffic[Y-1]++;
        }

        int mx = *max_element(traffic.begin(), traffic.end());

        cout << "Teste " << testCount++ << "\n";
        bool first = true;
        FOR(i,0,A){
            if (traffic[i] == mx) {
                if (!first) cout << " ";
                cout << i+1;
                first = false;
            }
        }
        cout << "\n\n";
    }

    return 0;
}
