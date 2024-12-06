/*
Frog 1 - Source: https://atcoder.jp/contests/tessoku-book/tasks/dp_a
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
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> h;
int n;
vector<int> dp;

int solve(int x){
    if(dp[x] != INF) return dp[x];
    return dp[x] = min(solve(x-1) + abs(h[x] - h[x-1]), solve(x-2) + abs(h[x] - h[x-2]));
}

signed main(){ _
    cin >> n;
    h.resize(n+1);
    h[0] = INF;
    FOR(i, 1, n+1) cin >> h[i];
    dp.resize(n+1, INF);
    dp[1] = 0;
    dp[0] = 0;
    cout << solve(n) << endl;



    return 0;
}
