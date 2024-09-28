/*
Number of Equal

Source: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
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
    int n,m; cin>>n>>m;
    map<int,int> qtd_a;
    int el;
    FOR(i,0,n){
        cin>>el;
        if(qtd_a.find(el) != qtd_a.end()) qtd_a[el]++;
        else qtd_a[el] = 1;
    }
    ll soma = 0;
    FOR(i,0,m){
        cin>>el;
        if(qtd_a.find(el) != qtd_a.end()) soma+=qtd_a[el];
    }
    cout<<soma<<'\n';

    return 0;
}


