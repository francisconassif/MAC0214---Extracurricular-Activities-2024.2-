/*
D - Knapsack 1

Source: https://atcoder.jp/contests/dp/tasks/dp_d
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define int long long 
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _
    int n, w;
    cin>>n>>w;
    vector<ll> dp(w+1, 0);
    FOR(i,0,n){
        ll wi, vi;
        cin>>wi>>vi;
        for(int j = w; j >= wi; j--){
            dp[j] = max(dp[j], dp[j-wi] + vi);
        }
    }
    cout<<dp[w]<<endl;

    return 0;
}
