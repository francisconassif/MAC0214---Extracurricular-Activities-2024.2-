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

}

int main(){ _
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string linhas[n];
        FOR(i,0,n){
            cin>>linhas[i];
        }
        for(int i = n-1; i>= 0; i--){
            FOR(j,0,4){
                if (linhas[i][j] == '#') cout<<j+1<<' ';
            }
        }
        cout<<'\n';
    }

    return 0;
}