#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long double ld;

signed main(){ _
    int n; cin >> n;
    ld ans = 0.0;
    ld xo, yo, xi, yi;
    xo=0, yo=0;
    FOR(i, 0, n){
        cin >> xi >> yi;
        ans += sqrt((xo-xi)*(xo - xi) + (yo-yi)*(yo-yi));
        xo = xi;
        yo = yi;
    }
    ans += sqrt((xo)*(xo) + (yo)*(yo));
    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}
