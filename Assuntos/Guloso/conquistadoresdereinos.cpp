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

vector<vector<int>> graph; 
vector<int> color; 
vector<int> curr_color;
int n;

vector<int> ordem(){
    vector<int> ord;
    vector<bool> vis(n, false);
    queue<int> q; 
    vis[0] = true;
    q.push(0);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        ord.pb(curr);
        for(auto filho : graph[curr]){
            if(!vis[filho]){
                vis[filho] = true;
                q.push(filho);
            }
        }
    }
    return ord;
}

void bfs(int start, int cor){
    vector<bool> vis(n,false);
    queue<int> q;

    vis[start] = true;
    q.push(start);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(auto filho : graph[curr]){
            if(!vis[filho]){
                vis[filho]=true;
                curr_color[filho] = cor;
                q.push(filho);
            }
        }
    }
}

signed main(){ _
    cin >> n;
    graph.resize(n);
    color.resize(n);
    curr_color.resize(n,0);
    FOR(i, 1, n){
        int x; cin >> x; 
        x--;
        graph[x].pb(i);
    }
    FOR(i, 0, n){
        cin >> color[i];
    } 
    vector<int> ord = ordem();
    int mov = 0;
    for(auto node : ord){
        //dbg(node);
        if(curr_color[node] != color[node]){
            bfs(node, color[node]);
            mov++;
        }
    }
    cout<<mov<<endl;


    
    return 0;
}
