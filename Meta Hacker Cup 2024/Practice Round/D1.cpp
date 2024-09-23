#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define int long long
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _
    int t; cin >> t;
    int caso = 0;
    while(t--){
        caso++;
        int n; cin >> n;
        int g; cin >> g;
        vector<int> a(n);
        FOR(i,0,n){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int minindex = n-1;
        int mindist = abs(g-a[0]);

        FOR(i,1,n){
            if(abs(g-a[i]) <= mindist){
                minindex = n-i-1;
                mindist = abs(g-a[i]);
            }
            if(a[i] > g) break;
        }
        
        cout << "Case #" << caso << ": "<<minindex+1<<' '<<mindist<<'\n';
    }

    return 0;
}


