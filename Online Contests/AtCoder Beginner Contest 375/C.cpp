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

bool isvalid(ll i, ll j, ll n){
    return i >= 0 && i < n && j >= 0 && j < n;
}

signed main(){ _
    ll n; ll m;
    cin >> n >> m;
    ll total = n*n;
    set<pll> killed;
    int i, j;
    FOR(k,0,m){
        cin >> i >> j;
        i--; j--;
        killed.insert({i,j});
        if(isvalid(i-1,j+2,n)) killed.insert({i-1,j+2});
        if(isvalid(i+1,j+2,n)) killed.insert({i+1,j+2});
        if(isvalid(i+2,j-1,n)) killed.insert({i+2,j-1});
        if(isvalid(i+2,j+1,n)) killed.insert({i+2,j+1});
        if(isvalid(i-1,j-2,n)) killed.insert({i-1,j-2});
        if(isvalid(i+1,j-2,n)) killed.insert({i+1,j-2});
        if(isvalid(i-2,j-1,n)) killed.insert({i-2,j-1});
        if(isvalid(i-2,j+1,n)) killed.insert({i-2,j+1});
    }
    cout << total - killed.size() << endl;
    
    return 0;
}


