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

signed main(){ _
    string a; 
    cin>>a;
    bool tema=false,  temb=false, temc=false;
    FOR(i,0,3){
        if(a[i]=='A') tema=true;
        if(a[i]=='B') temb=true;
        if(a[i]=='C') temc=true;
    }
    if(tema && temb && temc){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}


