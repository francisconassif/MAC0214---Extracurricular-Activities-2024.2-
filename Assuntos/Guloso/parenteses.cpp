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
    int n; cin >> n;
    string a; cin >> a;
    if(n % 2 != 0){
        cout << ":(\n";
        return 0;
    }
    int open = 0, close = 0, interrog = 0;
    for(char c : a){
        if(c == '(') open++;
        else if(c == ')') close++;
        else interrog++;
    }
    int req_open = (n / 2) - open;
    int req_close = (n / 2) - close;

    if(req_open < 0 || req_close < 0 || req_open + req_close != interrog){
        cout << ":(\n";
        return 0;
    }

    string res = a;
    for(int i = 0; i < n; ++i){
        if(res[i] == '?'){
            if(req_open > 0){
                res[i] = '(';
                req_open--;
            }
            else{
                res[i] = ')';
                req_close--;
            }
        }
    }

    int balance = 0;
    bool invalid = false;

    for(int i = 0; i < n; ++i){
        if(res[i] == '(') balance++;
        else balance--;

        if(balance < 0){
            invalid = true;
            break;
        }

        if(balance == 0 && i < n - 1){
            invalid = true;
            break;
        }
    }

    if(invalid || balance != 0){
        cout << ":(\n";
        return 0;
    }
    else{
        cout << res << "\n";
    }

    
    return 0;
}
