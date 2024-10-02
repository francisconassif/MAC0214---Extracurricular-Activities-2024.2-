/*
F - Consecutive Subsequence

Source: https://codeforces.com/contest/977/problem/F
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

int n; 
map<int, int> senha;
map<int, vector<int>> adj;
set<int> ultimos;

signed main(){ _
    cin>>n;
    int a;
    int tmax = 0;
    int amax = 0;
    int seed = 0;
    FOR(i,0,n){
        cin>>a;
        if(ultimos.find(a-1)!=ultimos.end()){
            ultimos.erase(a-1);
            ultimos.insert(a);
            senha[a]=senha[a-1];
            adj[senha[a]].pb(i+1);
            int tcurr = adj[senha[a]].size();
            if(tcurr>tmax){
                tmax = tcurr;
                amax = a;
            }
        }
        else if(ultimos.find(a)==ultimos.end() && senha.find(a)==senha.end()){
            ultimos.insert(a);
            senha[a] = seed;
            adj[seed].pb(i+1);
            seed++;
            int tcurr = 1;
            if(tcurr>tmax){
                tmax = tcurr;
                amax = a;
            }
        }
    }
    cout<<tmax<<'\n';
    for(auto i:adj[senha[amax]]){
        cout<<i<<' ';
    }
    cout<<'\n';

    return 0;
} 
