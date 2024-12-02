/*
Planet Queries I - Source: https://cses.fi/problemset/task/1750
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define pb push_back

const int INF = 0x3f3f3f3f;
const int MAXN = 200001;
const int LOG = 30;

int up[MAXN][LOG];
int parent_node[MAXN];

int n, q;

void preprocess_up_table(){
    for(int i = 1; i <= n; i++){
        up[i][0] = parent_node[i];
    }
    for(int j = 1; j < LOG; j++){
        for(int i = 1; i <= n; i++){
            if(up[i][j-1] != -1){
                up[i][j] = up[up[i][j-1]][j-1];
            }
            else{
                up[i][j] = -1;
            }
        }
    }
}

int get_kth_ancestor(int node, int k){
    int current = node;
    int log_level = 0;
    while(k > 0 && current != -1){
        if(k & 1){
            current = up[current][log_level];
        }
        k >>= 1;
        log_level++;
    }
    return current;
}

int main(){ _
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> parent_node[i];
    memset(up, -1, sizeof(up));
    preprocess_up_table();
    int u, k;
    for(int i = 0; i < q; i++){
        cin >> u >> k;
        int answer = get_kth_ancestor(u, k);
        cout << answer << '\n';
    }

    return 0;
}
