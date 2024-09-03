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
        ll n, q;
        ll soman=0;
        cin>>n>>q;
        vector<ll> a(n);
        FOR(i,0,n){
            cin>>a[i];
            soman+=a[i];
        }
        ll l, r;
        ll subl, subr, posl, posr;
        ll soma = 0;
        FOR(i,0,q){
            soma = 0;
            cin>>l>>r;
            subl = l/n;
            subr = r/n;
            if(l%n == 0) subl--;
            if(r%n == 0) subr--;
            posl = (l-1)%n;
            posr = (r-1)%n;
            soma += (subr - subl - 1)*soman;
            if(subr == subl && l != r){
                soma = 0;
                ll esquerda = r - l+1;
                ll end = (subl + posl)%n;
                FOR(j, 0, esquerda){
                    soma+=a[end];
                    end = (end+1)%n;
                }

            }
            else if(l!=r){
                //if(subr == subl) soma = 0;
                ll esquerda = n - posl;
                ll direita = posr+1;
                ll end = (subr + posr)%n;

                FOR(j, 0, direita){
                    soma+=a[end];
                    end = (end-1+n)%n;
                }
                end = (subl + posl)%n;
                FOR(j, 0, esquerda){
                    soma+=a[end];
                    end = (end+1)%n;
                }
            }
            else{
                ll end = (subr + posr)%n;
                soma = a[end];
            }
            cout<<soma<<'\n';
        }
    }

    return 0;
}
