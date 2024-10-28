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
    int n; cin >> n;
    ll total = 0;
    vector<int> v(n);
    FOR(i, 0, n){
        cin >> v[i];
        total += v[i];
    }
    sort(v.begin(), v.end());
    ll A=0; ll B=total/2;
    ll maximo = 0;
    int i = 0; 
    int j = 0; 
    while(i < n && j < n){
        if(A + v[i] <= B){
            A += v[i];
            maximo = max(maximo, A);
            i++;
        }
        else{
            A -= v[j];
            j++;
        }

    }
    cout << total - maximo << '\n';

    return 0;
}
