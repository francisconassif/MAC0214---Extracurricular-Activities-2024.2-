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

vector<ll> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 121, 232, 343, 454, 565, 676, 787, 898, 12321, 
                    23432, 34543, 45654, 56765, 67876, 78987, 1234321, 2345432, 3456543, 4567654, 
                    5678765, 6789876, 123454321, 234565432, 345676543, 456787654, 567898765, 
                    12345654321, 23456765432, 34567876543, 45678987654, 1234567654321, 2345678765432, 
                    3456789876543, 123456787654321, 234567898765432, 12345678987654321};

int main(){ _
    int t; cin >> t;
    ll a, b;
    ll div;
    int count;
    int caso = 0;
    while(t--){
        caso++;
        count = 0;
        cin >> a >> b;
        cin >> div;
        for(auto x : vetor){
            if(x < a || x > b) continue;
            if(x % div == 0 && x/div > 0){
                count++;
            }
        }
        cout<<"Case #"<<caso<<": "<<count<<endl;
    }

    return 0;
}
