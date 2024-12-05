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
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        ll soma = 0;
        ll somapar = 0;
        ll somaimpar = 0;
        FOR(i,0,n){
            cin >> a[i];
            soma += a[i];
            if(i%2 == 0) somapar += a[i];
            else somaimpar += a[i];
        }
        if(soma%n != 0){
            cout << "No\n";
            continue;
        }
        ll media = soma/n;
        if(n%2 == 0 && somapar == somaimpar){
            cout << "Yes\n";
            continue;
        }
        if(n%2 == 1 && somapar == somaimpar + media){
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }

    return 0;
}
