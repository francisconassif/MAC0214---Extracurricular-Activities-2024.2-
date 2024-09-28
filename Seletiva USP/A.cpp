#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define dbg(x) cout << #x << " = " << x << '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,pii> pp;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

signed main(){ _
    int n; cin>>n;
    set<pp> ordem;
    queue<int> conv;
    queue<int> musicas;
    FOR(i,0,n){
        int a, b, c;
        cin>>a>>b>>c;
        ordem.insert({{a,b},{c,i+1}});
    }
    vector<int> magoados;
    bool he = false;
    int ultima = 0;

    for (auto el : ordem){

        if(!musicas.empty()){
            while(musicas.front()<=el.f.f){
                ultima = musicas.front();
                musicas.pop();
                conv.pop();
                if(musicas.empty()) break;
            }
        }

        if(!musicas.empty() && el.s.f == 1){
            musicas.push(el.f.f+el.f.s);
            conv.push(el.s.s);
            int convidado = conv.front();
            conv.pop();
            magoados.pb(convidado);
            he = true;
            ultima = musicas.front();
            musicas.pop();
            while(musicas.front() != el.f.f+el.f.s){
                int mus = musicas.front();
                int curr = conv.front();
                conv.pop();
                conv.push(curr);
                musicas.pop();
                musicas.push(mus-ultima+el.f.f+el.f.s);
                if(musicas.empty()) break;
            }
        }

        else if(musicas.empty()){
            musicas.push(el.f.f+el.f.s);
            conv.push(el.s.s);
        }
        
        else{
            musicas.push(musicas.back()+el.f.s);
            conv.push(el.s.s);
        }
    }   

    if(he){
        cout<<magoados.size()<<'\n';
        for(auto mag : magoados){
            cout<<mag<<' ';
        }
        cout<<'\n';
    }
    else cout<<"0\n";

    return 0;
}
