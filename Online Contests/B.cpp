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
    string a,b; cin >> a >> b;
    bool dif = false;
    int tam = a.size();
    int tam2 = b.size();
    if(tam != tam2) dif = true;
    int menor = min(tam,tam2);
    for(int i = 0; i < menor; i++){
        if(a[i]!=b[i]){
            cout<<i+1<<'\n';
            return 0;
        }
    }
    if(dif) cout<<menor+1<<'\n';
    else cout<<"0\n";
    
    return 0;
}
