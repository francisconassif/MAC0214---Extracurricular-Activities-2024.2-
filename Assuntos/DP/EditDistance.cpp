/*
Edit Distance - Source: https://cses.fi/problemset/task/1639
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << " "
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main() { _
    string a, b; cin >> a >> b;

    int n = a.size();
    int m = b.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1));

    FOR(i,0,n+1) dp[i][0] = i;
    FOR(j,0,m+1) dp[0][j] = j;

    FOR(i,1,n+1){
        FOR(j,1,m+1){
            if(a[i-1] == b[j - 1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
        }
    }

    cout << dp[n][m] << '\n';

    return 0;
}
