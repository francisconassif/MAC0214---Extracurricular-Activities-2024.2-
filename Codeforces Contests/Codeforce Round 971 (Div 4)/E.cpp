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

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;




void solve(){

}

int main(){ _
    int t; cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll total = (n*(2*k+n-1))/2;
        ll min_x = LINF; 
        bool quebra = false;
        FOR(i,n/2,n+1){
            ll S1 = i*k+(i*(i-1))/2;
            ll S2 = total - S1;
            ll x = abs(S1 - S2);
            if(x < min_x){
                min_x = x;
            }
            if(S1 > S2){
                if(quebra) break;
                else quebra = true;
            }
        }

        cout<<min_x<<'\n';  

    }

    return 0;
}
