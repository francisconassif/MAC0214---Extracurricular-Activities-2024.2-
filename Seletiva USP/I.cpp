#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define pb push_back
#define eb emplace_back
#define dbg(x) cout << #x << " = " << x << '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; cin >> n;
    bool is_1 = true;
    bool is_0 = true;
    bool is_pair = true;
    
    while (n--) {
        int a; cin >> a;
        if (a != 1 && a != 0) is_1 = false;
        if (a % 2 != 0) is_pair = false;
        if (a != 0) is_0 = false;
    }
    if (is_0) cout << '0' << endl;
    else if (is_1 || is_pair) cout << '1' << endl;
    else cout << '2' << endl;
    return 0;
}
