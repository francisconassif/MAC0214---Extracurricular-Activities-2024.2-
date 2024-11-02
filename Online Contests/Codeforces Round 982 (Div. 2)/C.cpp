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
        vector<int> b(n);
        int last = -1;
        FOR(i, 0, n){
            cin >> a[i];
            b[i] = n-i;
            if(b[i] == a[i]) last = i;
        }
        if(last == -1){
            cout << n << endl;
            continue;
        }
        else{
            int tam = n;
            while(last != -1 && last != 0){
                tam = tam + last;
                iota(b.rbegin(), b.rend(), last+1);
                last = -1;
                for(int i = n-1; i >= 0; i--){
                    if(b[i] == a[i]){
                        last = i;
                        break;
                    }
                }
            }
            cout<<tam<<endl;
        }
    }

    return 0;
}