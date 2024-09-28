#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)

int main(){ _
    int n,m;
    cin>>n>>m;
    vector<bool> vis(n,false);
    int family;
    char gender;
    FOR(i,0,m){
        cin>>family>>gender;
        if(gender == 'F') cout<<"No\n";
        else{
            if(vis[family]) cout<<"No\n";
            else{
                vis[family] = true;
                cout<<"Yes\n";
            }
        }
    }

    return 0;
}


