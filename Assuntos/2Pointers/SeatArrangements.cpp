/*
Seat Arrangements

Source: https://codeforces.com/contest/919/problem/C
*/

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
    int n,m,k; cin>>n>>m>>k;
    vector<vector<char>> colunas(m);
    int soma = 0;
    int curr = 0;
    int formas = 0;
    char el;
    FOR(i,0,n){
        curr = 0;
        FOR(j,0,m){
            cin>>el;
            colunas[j].pb(el);
            if(el == '.'){
                curr++;
                if(curr >= k && j == m-1){
                    formas = curr-k+1;
                    soma+=formas;
                }
            }
            else{
                if(curr >= k){
                    formas = curr-k+1;
                    soma+=formas;
                }
                curr=0;
            }
        }
    }
    FOR(j,0,m){
        curr = 0;
        FOR(i,0,n){
            if(colunas[j][i] == '.'){
                curr++;
                if(curr >= k && i == n-1){
                    formas = curr-k+1;
                    soma+=formas;
                }
            }
            else{
                if(curr >= k){
                    formas = curr-k+1;
                    soma+=formas;
                }
                curr=0;
            }
        }
    }
    if(k == 1) soma /= 2;
    cout<<soma<<endl;

    return 0;
}


