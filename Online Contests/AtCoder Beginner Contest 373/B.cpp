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

signed main(){ _
    vector<char> alfabeto(26);
    map<char, int> pos;
    FOR(i,0,26){
        cin >> alfabeto[i];
        pos[alfabeto[i]] = i;
    }
    int dist = 0;
    char ant = 'A';
    for(char letra = 'B'; letra <= 'Z'; letra++){
        dist += max(pos[letra], pos[ant]) - min(pos[letra], pos[ant]);
        ant = letra;
    }
    cout<<dist<<'\n';
    return 0;
}


