#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long
#define eb emplace_back
typedef tuple<int,int,int> tii;
typedef vector<tii> vt;

const int INF = 1000000001;
int n,m;

bool valida(vector<int> &perm, vt & lines){
    vector<int> pos(n);
    for(int i = 0; i<n; ++i) pos[perm[i]]=i;
    for(auto & [a,b,c] : lines){
        int d = abs(pos[a]-pos[b]);
        if((c>0 && d > c) || (c < 0 && d < -c)) return false;
    }
    return true;
}


signed main(){ _
    while(true){
        cin>>n>>m;
        if(n == 0 && m == 0) return 0;
        vt lines;
        for(int i = 0; i < m; ++i){
            int a,b,c;
            cin>>a>>b>>c;
            lines.eb(a,b,c);
        }
        vector<int> perm(n);
        iota(perm.begin(),perm.end(),0);
        int cnt = 0;

        if (valida(perm, lines)){
            cnt++;
        }

        while(next_permutation(perm.begin(), perm.end())){
            if(valida(perm,lines)){
                cnt++;
            }
        }

        cout<<cnt<<'\n';
    }


    return 0;
}
