/*
Counting Kangaroos is Fun

Source: https://codeforces.com/contest/373/problem/C
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
    int n; cin >> n;
    vector<int> kangaroos(n);

    FOR(i,0,n) cin>>kangaroos[i];

    sort(kangaroos.begin(), kangaroos.end());

    int i = 0; 
    int j = 0; 
    int pares = 0;
    while(i < n && j < n){
        if(i == j){
            j++;
            continue;
        }
        if(kangaroos[j] >= 2*kangaroos[i]){
            pares++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    
    int minimo;
    if(n%2 == 0) minimo = n/2;
    else minimo = n/2 + 1;
    int ans = max(n - pares,minimo);
    cout<<ans<<'\n';
    return 0;
}
