#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


void solve(){
    int n; cin>>n;
    ll even_sum = 0, odd_sum = 0;
    int even_max = 0, odd_max = 0;
    FOR(i,0,n){
        int x; cin>>x;
        if(i%2==0){
            even_sum++;
            even_max = max(even_max, x);
        }
        else{
            odd_sum++;
            odd_max = max(odd_max, x);
        }
    }
    cout<<max(even_sum + even_max, odd_sum + odd_max)<<endl;

}

int main(){ _
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
