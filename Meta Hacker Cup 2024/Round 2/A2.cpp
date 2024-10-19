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

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll maximo = 1e18;
vector<ll> vetor;

void gera_esq(int pos, int max_pos, int ant, int mid, vector<int>& esquerda, vector<vector<int>>& esq){
    if(pos == max_pos){
        esq.pb(esquerda);
        return;
    }

    FOR(d,ant,mid){
        if (d == 0) continue; 
        esquerda[pos] = d;
        gera_esq(pos + 1, max_pos, d, mid, esquerda, esq);
    }
}

void gera_dir(int pos, int max_pos, int ant, int mid, vector<int>& direita, vector<vector<int>>& dir){
    if (pos == max_pos){
        dir.pb(direita);
        return;
    }
    for(int d = ant; d > 0; d--){
        if (d >= mid) continue; 
        direita[pos] = d;
        gera_dir(pos + 1, max_pos, d, mid, direita, dir);
    }
}

void precalc(){
    for(int total_digits = 1; total_digits < 19; total_digits += 2){
        int half = total_digits / 2;

        FOR(mid, 1, 10){
            vector<vector<int>> esq;
            vector<int> esquerda(half);
            gera_esq(0, half, 1, mid, esquerda, esq);

            vector<vector<int>> dir;
            vector<int> direita(half);
            gera_dir(0, half, mid - 1, mid, direita, dir);

            for(auto& e : esq){
                for(auto& r : dir){
                    ll num = 0;
                    for(int d : e){
                        num = num*10 + d;
                    }
                    num = num*10 + mid;
                    for (int d : r){
                        num = num*10 + d;
                    }
                    if(num < maximo){
                        vetor.pb(num);
                    }
                }
            }
        }
    }
}

int main() { _
    int caso = 0;
    precalc();
    int t; cin >> t;
    while(t--){
        caso++;
        ll a, b, m;
        ll cnt = 0;
        cin >> a >> b >> m;
        for(auto el: vetor){
            if(el < a || el > b) continue;
            if(el % m == 0) cnt++;
        }
        cout<<"Case #"<<caso<<": "<<cnt<<'\n';
    }

    return 0;
}
