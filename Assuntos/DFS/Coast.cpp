/*
Coast - Source: https://neps.academy/exercise/329
*/

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

signed main() { _
    int M, N; cin >> M >> N;
    vector<string> grid(M);
    for (int i = 0; i < M; i++) {
        cin >> grid[i];
    }

    int directions[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    int coastCount = 0;

    FOR(i,0,M){
        FOR(j,0,N){
            if (grid[i][j] == '#') {
                bool isCoast = false;
                for (auto &d : directions) {
                    int ni = i + d[0];
                    int nj = j + d[1];
                    if (ni < 0 || ni >= M || nj < 0 || nj >= N) {
                        isCoast = true;
                        break;
                    } 
                    else if (grid[ni][nj] == '.') {
                        isCoast = true;
                        break;
                    }
                }
                if (isCoast) coastCount++;
            }
        }
    }

    cout << coastCount << "\n";
    return 0;
}
