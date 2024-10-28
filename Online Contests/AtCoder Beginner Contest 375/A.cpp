#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

signed main(){ _
    int n; cin >> n;
    string a; cin >> a;
    int ans = 0;
    FOR(i, 0, n-2){
        if(a[i] == '#' && a[i+1] == '.' && a[i+2] == '#'){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
