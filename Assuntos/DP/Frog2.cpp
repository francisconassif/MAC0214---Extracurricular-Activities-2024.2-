/*
B - Frog 2

Source: atcoder.jp/contests/dp/tasks/dp_b
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

int n, k;
vector<int> pos;
map<int,int> dp;

int solve(int tam){
    if(dp.find(tam) != dp.end()) return dp[tam];
    if(k == 1) return dp[tam] = abs(pos[tam-1] - pos[tam-2]) + solve(tam-1);
    int ans = INF;
    FOR(i,1,k+1){
        if(tam-i <= 0) break;
        ans = min(ans, abs(pos[tam-1] - pos[tam-1-i]) + solve(tam-i));
    }
    return dp[tam] = ans;

}

signed main(){ _
    cin>>n>>k;
    pos.resize(n);
    FOR(i, 0, n) cin>>pos[i];
    dp[0]=dp[1]=0;
    cout<<solve(n)<<'\n';
    return 0;
}
