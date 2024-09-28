#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define dbg(x) cout << #x << " = " << x << '\n'
#define FOR(i,a,n) for(int i = a; i<n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;


int main(){ _
    int t; cin>>t;
    while(t--){
        string nome; cin>>nome;
        int n = nome.length();
        FOR(i,0,n){
            if(i == 0){
                if(n>1 && nome[i] == nome[i+1]){
                    cout<<nome[i];
                }
                else if(n==1){
                    cout<<nome<<nome<<'\n';
                }
                else{
                    cout<<nome[i]<<nome[i];
                }
            }
            else if(i != n-1){
                if(nome[i] != nome[i-1] && nome[i] != nome[i+1]){
                    cout<<nome[i]<<nome[i];
                }
                else{
                    cout<<nome[i];
                }
            }
            else{
                if(nome[i]!=nome[i-1]){
                    cout<<nome[i]<<nome[i]<<'\n';
                }
                else{
                    cout<<nome[i]<<'\n';
                }
            }
        }
    }

    return 0;
}
