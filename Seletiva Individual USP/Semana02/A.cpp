#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;

int main(){ _
    ll n,x,a;
    cin>>n>>x;
    bool yes = true;
    FOR(i,0,n){
        cin>>a;
        if(i%2 == 1) x+=1;
        if(x>0) x-=a;
        if(x<0) yes = false;
    }
    if(yes) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
