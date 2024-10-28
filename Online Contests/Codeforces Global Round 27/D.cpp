#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(ll i = a; i < n; i++)
#define int long long

typedef long long ll;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9+7;

pair<int,int> ordem(int numero){
    int contador = 0;
    while (numero % 2 == 0){
        numero /= 2;
        contador++;
    }
    return {contador,numero};
}

signed main(){ _
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll sum = 0;
        set<pair<int,int>> pares;
        int ultimo_grande = 0;
        cin >> ultimo_grande;
        cout << ultimo_grande << " ";
        sum = ultimo_grande;
        FOR(i,1,n){
            int x; cin >> x;
            while(!pares.empty()){
                pair<int,int> menorpar = *pares.begin();
                int menor = menorpar.s;
                int resto = menorpar.f;
                if(resto <= x){
                    x = x * (menor/resto);
                    sum = sum - menor;
                    pares.erase(menorpar);
                    menor = resto;
                    sum = (sum + menor)%MOD;
                }
                else break;
            }
            if(x < ordem(ultimo_grande).s){
                sum = (sum + x)%MOD; 
                if(x % 2 == 0) pares.insert({ordem(x).s,x});
            }
            else{
                int seila = ordem(ultimo_grande).s;
                x = x*(ultimo_grande/seila);
                sum -= ultimo_grande;
                ultimo_grande = seila;
                sum = (sum + ultimo_grande)%MOD;
                while(!pares.empty()){
                    pair<int,int> menorpar = *pares.begin();
                    int menor = menorpar.s;
                    int resto = menorpar.f;
                    if(resto <= x){
                        x = x * (menor/resto);
                        sum = sum - menor;
                        pares.erase(menorpar);
                        menor = resto;
                        sum = (sum + menor)%MOD;
                    }
                    else break;
                }
                ultimo_grande = x;
                sum = (sum + x)%MOD; 

            }
            cout << sum << " ";
        }
        cout << "\n";
    }
    
    
    return 0;
}


