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
    string a; cin >> a;
    int tam = a.size();
    if(a[tam-3] == 's' && a[tam-2] == 'a' && a[tam-1] == 'n'){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}
