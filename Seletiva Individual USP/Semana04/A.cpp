#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long

const int INF = 1000000001;
signed main(){ _
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int b[n];
        int min_a = INF;
        int min_b = INF;
        for(int i = 0; i < n; ++i){
            cin>>a[i];
            min_a = min(min_a, a[i]);
        }
        for(int i = 0; i < n; ++i){
            cin>>b[i];
            min_b = min(min_b, b[i]);
        }
        int mov = 0;
        for(int i = 0; i < n; ++i){
            int d_a = a[i] - min_a;
            int d_b = b[i] - min_b;
            int min_d = min(d_a,d_b);
            int res_a = d_a - min_d;
            int res_b = d_b - min_d;
            mov += min_d + res_a + res_b;
        }
        cout<<mov<<'\n';
    }

    return 0;
}
