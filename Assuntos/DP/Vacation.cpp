/*
C - Vacation

Source: atcoder.jp/contests/dp/tasks/dp_c
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n;
vector<int> a;
vector<int> b;
vector<int> c;


ll solve(ll (&dp)[][3], int size, int exclui){
    if(size == 0) return 0;
    if(exclui != -1 && dp[size-1][exclui] != -1) return dp[size-1][exclui];
    if(exclui == -1){
        ll ans1 = solve(dp, n-1, 0) + a[n-1];
        ll ans2 = solve(dp, n-1, 1) + b[n-1];
        ll ans3 = solve(dp, n-1, 2) + c[n-1];
        return max(max(ans1,ans2),ans3);
    }
    if(exclui == 0){
        ll ans2 = solve(dp, size-1, 1) + b[size-1];
        ll ans3 = solve(dp, size-1, 2) + c[size-1];
        return dp[size-1][exclui] = max(ans2,ans3);
    }
    if(exclui == 1){
        ll ans1 = solve(dp, size-1, 0) + a[size-1];
        ll ans3 = solve(dp, size-1, 2) + c[size-1];
        return dp[size-1][exclui] = max(ans1,ans3);
    }
    if(exclui == 2){
        ll ans1 = solve(dp, size-1, 0) + a[size-1];
        ll ans2 = solve(dp, size-1, 1) + b[size-1];
        return dp[size-1][exclui] = max(ans1,ans2);
    }
    
}

int main(){ _
    cin>>n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    ll dp[n][3];
    memset(dp, -1, sizeof dp);
    FOR(i,0,n){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<solve(dp,n,-1)<<endl;
    

    return 0;
}
