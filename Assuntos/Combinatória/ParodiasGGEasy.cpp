/*
Paródias GG Easy - Source: https://codeforces.com/group/xR6OpxQBMc/contest/242072/problem/D
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

const int MOD = 1000000007;

signed main() { _

    int n; cin >> n;

    string P = "ilarilariegegege";
    int m = (int)P.size();

    vector<int> lps(m,0);
    {
        int j = 0;
        FOR(i, 1, m){
            while (j > 0 && P[i] != P[j]) {
                j = lps[j-1];
            }
            if (P[i] == P[j]) j++;
            lps[i] = j;
        }
    }

    vector<vector<int>> nextState(m, vector<int>(26,0));
    FOR(s,0,m){
        FOR(c,0,26){
            char ch = 'a' + c;
            int ns = s;
            while (ns > 0 && P[ns] != ch) ns = lps[ns-1];
            if (P[ns] == ch) ns++;
            nextState[s][c] = ns;
        }
    }

    vector<vector<int>> DP(n+1, vector<int>(m,0));
    DP[0][0] = 1; 

    FOR(i,0,n){
        FOR(s,0,m){
            if (DP[i][s] == 0) continue;
            int ways = DP[i][s];
            for (int c = 0; c < 26; c++) {
                int ns = nextState[s][c];
                if (ns < m) {
                    DP[i+1][ns] = (DP[i+1][ns] + ways) % MOD;
                }
            }
        }
    }

    int ans = 0;
    for (int s = 0; s < m; s++) {
        ans = (ans + DP[n][s]) % MOD;
    }

    cout << ans << "\n";

    return 0;
}
