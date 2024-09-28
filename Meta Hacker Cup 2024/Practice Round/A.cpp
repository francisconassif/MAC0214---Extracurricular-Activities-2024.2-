#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define int long long
#define FOR(i, a, n) for(int i = a; i < n; i++)



signed main(){ _
    int t; cin >> t;
    int caso = 1;
    while(t--){
        int n,k; cin >> n >> k;
        int mini = 0x3f3f3f3f3f3f3f3fll;
        int x; 
        FOR(i,0,n){
            cin >> x;
            mini = min(mini,x);
        }
        int ans;
        if(n == 1) ans = mini;
        else{
            ans = mini + 2*(n-2)*mini;
        }

        
        
        if(ans <= k){
            cout<<"Case #"<<caso<<": YES\n";
        }
        else{
            cout<<"Case #"<<caso<<": NO\n";
        }

        caso++;
    }

    return 0;
}


