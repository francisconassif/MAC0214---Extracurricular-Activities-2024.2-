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
    vector<string> linhas(8);
    vector<int> linhas_bloqueadas;
    vector<int> colunas_bloqueadas;
    FOR(i, 0, 8) cin >> linhas[i];
    FOR(i, 0, 8){
        FOR(j, 0, 8){
            if(linhas[i][j] == '#'){
                linhas_bloqueadas.pb(i);
                colunas_bloqueadas.pb(j);
            }
        }
    }
    for(auto el : linhas_bloqueadas){
        FOR(j, 0, 8){
            linhas[el][j] = 'X';
        }
    }
    for(auto el : colunas_bloqueadas){
        FOR(i, 0, 8){
            linhas[i][el] = 'X';
        }
    }
    int ans = 0;
    FOR(i, 0, 8){
        FOR(j, 0, 8){
            if(linhas[i][j] == '.'){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}


