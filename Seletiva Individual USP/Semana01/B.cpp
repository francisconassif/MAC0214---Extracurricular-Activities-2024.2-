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
    int n; cin>>n;
    vector<string> novos;
    vector<string> velhos;
    string velho, novo;
    while(n--){
        cin>>velho>>novo;
        auto pos = find(novos.begin(), novos.end(), velho);
        if(pos == novos.end()){
            velhos.pb(velho);
            novos.pb(novo);
        }
        else{
            int index = distance(novos.begin(),pos);
            novos[index] = novo;
        }
    }
    int tam = novos.size();
    cout<<tam<<endl;
    FOR(i,0,tam){
        cout<<velhos[i]<<' '<<novos[i]<<endl;
    }

    return 0;
}
