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
    int t; cin >> t; 
    string basepar = "66";
    string baseimpar = "36366";
    while(t--){
        int n; cin >> n;
        if(n % 2 == 0) n -= 2;
        if(n < 0 || n == 1 || n == 3) cout << "-1\n";
        else{
            if(n%2 == 0){
                FOR(i, 0, n/2){
                    cout << "33";
                }
                cout << basepar << endl;
            }
            else{
                n-=5;
                FOR(i, 0, n/2){
                    cout << "33";
                }
                cout << baseimpar << endl;
            }
        }
    }
    
    
    return 0;
}


