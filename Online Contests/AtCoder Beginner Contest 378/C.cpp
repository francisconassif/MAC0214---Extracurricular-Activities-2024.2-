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




void solve(){

}

signed main(){ _
    int n; cin >> n; 
    map<int, int> last_pos;
    FOR(i, 0, n){
        int x; cin >> x;
        if(last_pos.find(x) == last_pos.end()){
            cout << "-1 ";
            last_pos[x] = i;
        }
        else{
            cout<< last_pos[x] + 1 << " ";
            last_pos[x] = i;
        }
        
    }
    cout << endl;
    

    return 0;
}
