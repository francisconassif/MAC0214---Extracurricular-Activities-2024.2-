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
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        int tam = n.length();
        int num2 = 0;
        int num3 = 0;
        int soma = 0;
        FOR(i, 0, tam){
            if(n[i] == '2') num2++;
            if(n[i] == '3') num3++;
            soma += n[i]-'0';
            soma = soma % 9;
        }
        int dif = soma % 9;
        if(dif == 0){
            cout<<"YES\n";
            continue;
        }
        if(dif == 8){
            if(num2 >=5 || (num2 >= 2 && num3 >=1)) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 7){
            if(num2 >=1) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 6){
            if(num2 >=6) cout<< "YES\n";
            else if(num2 >= 3 && num3 >= 1) cout<< "YES\n";
            else if(num3 >= 2) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 5){
            if(num2 >= 2) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 4){
            if(num2 >=7) cout<< "YES\n";
            else if(num2 >=4 && num3 >= 1) cout<< "YES\n";
            else if(num2 >= 1 && num3 >= 2) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 2){
            if(num2 >= 8) cout<< "YES\n";
            else if(num2 >= 5 && num3 >= 1) cout<< "YES\n";
            else if(num2 >= 2 && num3 >= 2) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 3){
            if(num3 >= 1 || num2 >= 3) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(dif == 1){
            if(num2 >= 1 && num3 >= 1) cout<< "YES\n";
            else if(num2 >= 4) cout<< "YES\n";
            else cout<<"NO\n";
            continue;
        }
        cout << "NO\n";

    }

    return 0;
}
