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


signed main(){ _
    int n = 4;
    set<int> conj;
    int pares = 0;
    FOR(i,0,n){
        int x;
        cin >> x;
        if(conj.count(x)){
            pares++;
            conj.erase(x);
        }
        else{
            conj.insert(x);
        }
    }
    cout << pares << endl;
    return 0;
}
