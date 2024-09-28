#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define dbg(x) cout << #x << " = " << x << '\n'
#define FOR(i,a,n) for(int i = a; i<n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

int main() { _
    int n, fi; cin >> n >> fi;
    bool bo = true;
    while (n--){
        int a, b; cin >> a >> b;
        int max_v = max(a,b);
        int min_v = min(a,b);
        if (a <= fi && b <= fi){
            fi += max_v;
        } else if (a <= fi || b <= fi) {
            fi += min_v;
        } else {
            bo = false;
        }
    }
    if (bo) cout << 'S' << endl;
    else cout << 'N' << endl;


}
