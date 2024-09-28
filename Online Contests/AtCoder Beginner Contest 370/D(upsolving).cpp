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

void destroy(vector<set<int>> &g1, vector<set<int>> &g2, int i, int j){
    g1[i].erase(j);
    g2[j].erase(i);
}

int main(){ _
    cin>>h>>w;
    int q; cin>>q;
    qtd = h*w;

    vector<set<int>> g1(h), g2(w);
    
    
    FOR(i, 0, h) {
        FOR(j, 0, w) {
            g1[i].insert(j);
            g2[j].insert(i);
        }
    }

    FOR(i, 0, q){
        int r,c; cin>>r>>c;
        r--; c--;
        if(qtd <= 0) break;
        
        if(g1[r].count(c)){
            destroy(g1, g2, r, c);
            qtd--;
        }
        else{
            
            auto it = g2[c].lower_bound(r);
            if (it != g2[c].begin()) {
                destroy(g1, g2, *prev(it), c);
                qtd--;
            }
            
            it = g2[c].lower_bound(r);
            if (it != g2[c].end()) {
                destroy(g1, g2, *it, c);
                qtd--;
            }
            
            it = g1[r].lower_bound(c);
            if (it != g1[r].begin()) {
                destroy(g1, g2, r, *prev(it));
                qtd--;
            }
           
            it = g1[r].lower_bound(c);
            if (it != g1[r].end()) {
                destroy(g1, g2, r, *it);
                qtd--;
            }
        }
    }

    cout<<qtd<<'\n';

    return 0;
}
