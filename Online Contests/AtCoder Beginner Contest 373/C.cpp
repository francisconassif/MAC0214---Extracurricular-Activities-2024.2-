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
    int n, a, b, maxa, maxb;
    cin>>n;
    maxa = maxb = -LINF;
    FOR(i,0,n){
        cin>>a;
        maxa = max(maxa, a);
    }
    FOR(i,0,n){
        cin>>b;
        maxb = max(maxb, b);
    }
    cout<<maxa+maxb<<'\n';
    return 0;
}


