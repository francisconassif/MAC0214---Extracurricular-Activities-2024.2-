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

set<int> fib;

void gerafib(int n){
    fib.insert(1);
    fib.insert(2);
    int curr = 2;
    int ult = 2;
    int ant = 1;
    while(curr<=n){
        curr = ult + ant;
        fib.insert(curr);
        ant = ult;
        ult = curr;
    }
}


bool isfib(int x){
    return fib.find(x)!=fib.end();
}

int main(){ _
    int t; cin>>t;
    int n,m,c,u,v;
    int caso = 0;
    gerafib(100001);
    while(t--){
        caso++;
        cin>>n>>m;
        int conta = 0;
        while(m--){
            cin>>u>>v>>c;
            if (c==1) conta++;
        }
        if(isfib(conta)){
            cout<<"Case #"<<caso<<": Yes"<<endl;
        }
        else cout<<"Case #"<<caso<<": No"<<endl;
    }

    return 0;
}
