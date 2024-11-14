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
    int k, n;
    cin >> k >> n;
    vector<int> a(k), b(k);
    int soma = 0;
    int soma2 = 0;
    FOR(i, 0, k){
        cin >> a[i] >> b[i];
        soma += b[i];
        soma2 += a[i];
    }
    if(n < soma2 || n > soma) cout << "NO\n";
    else{
        cout<<"YES\n";
        if(n == soma2){
            FOR(i, 0, k) cout << a[i] << " ";
        }
        else if(n == soma){
            FOR(i, 0, k) cout << b[i] << " ";
        }
        else{
            FOR(i, 0, k){
                int dif = n - soma2;
                if(dif == 0) cout << a[i] << " ";
                else if(b[i] - a[i] <= dif){
                    soma2+=b[i] - a[i];
                    cout << b[i] << " ";
                }
                else{
                    soma2 += dif;
                    cout << a[i] + dif << " ";
                }
            }
        }
    }
    cout << "\n";
    
    return 0;
}
