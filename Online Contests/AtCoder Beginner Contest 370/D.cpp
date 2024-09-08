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

int qtd=0;
int h, w;

void destroy(vector<vector<int>> &matriz, int dir, int i, int j){
    if(i < 0 || j < 0 || i >= h || j >= w) return;
    if(dir == 0){
        if(matriz[i][j] == 0){
            matriz[i][j] = 1;
            qtd--;
            return;
        }
        else{
            destroy(matriz,0,i-1,j);
        }
    }
    if(dir == 1){
        if(matriz[i][j] == 0){
            matriz[i][j] = 1;
            qtd--;
            return;
        }
        else{
            destroy(matriz,1,i,j+1);
        }
    }
    if(dir == 2){
        if(matriz[i][j] == 0){
            matriz[i][j] = 1;
            qtd--;
            return;
        }
        else{
            destroy(matriz,2,i+1,j);
        }
    }
    if(dir == 3){
        if(matriz[i][j] == 0){
            matriz[i][j] = 1;
            qtd--;
            return;
        }
        else{
            destroy(matriz,3,i,j-1);
        }
    }
}

signed main(){ _
    cin>>h>>w;
    int q; cin>>q;
    qtd = h*w;

    vector<vector<int>> matriz(h, vector<int>(w, 0));

    FOR(i, 0, q){
        int r,c; cin>>r>>c;
        r--; c--;
        if(matriz[r][c] == 0){
            matriz[r][c] =1;
            qtd--;
        }
        else{
            destroy(matriz,0,r-1,c);
            destroy(matriz,1,r,c+1);
            destroy(matriz,2,r+1,c);
            destroy(matriz,3,r,c-1);
        }
    }
    cout<<qtd<<endl;

    return 0;
}
