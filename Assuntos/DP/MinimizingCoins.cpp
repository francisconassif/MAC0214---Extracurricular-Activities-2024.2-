/*
Minimizing Coins - Source: https://cses.fi/problemset/task/1634
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
#define int long long

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll; 

signed main(){ _
    int n, x; cin >> n >> x;
    vector<int> moedas(n);
    vector<int> dp(x+1, INF);
    dp[0] = 0;
    FOR(i, 0, n){
        cin >> moedas[i];
        if(moedas[i] <= x) dp[moedas[i]] = 1;
    }
    dp[0] = 0;
    for(int i = 1; i <= x; i++){
        for(auto m : moedas){
            if(m > x) continue;
            if(i - m >= 0 && dp[i - m] != INF){
                dp[i] = min(dp[i], dp[i - m] + 1);
            }
        }
    }

    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
    return 0;
}
