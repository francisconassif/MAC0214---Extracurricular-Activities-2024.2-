/*
Traffic Lights - Source: https://cses.fi/problemset/task/1163
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

typedef int ll;

const int INF = 0x3f3f3f3f;

int main(){ _
    ll x, n;
    cin>>x>>n;
    multiset<ll> tam;
    set<ll> rua;
    tam.insert(x);
    rua.insert(0);
    rua.insert(x);
    FOR(i,0,n){
        ll p; cin>>p;
        auto it = rua.lower_bound(p);
        auto hi = *it;
        auto lo = *(--it);
        tam.erase(tam.find(hi-lo));
        tam.insert(p-lo);
        tam.insert(hi-p);
        rua.insert(p);
        auto ans = *tam.rbegin();
        cout<<ans<<' ';
    }
    cout<<'\n';


    

    return 0;
}
