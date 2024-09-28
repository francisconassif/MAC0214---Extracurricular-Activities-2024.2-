#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define pb push_back
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long

const int INF = 1000000001;

vector<int> divisores(int x){
    vector<int> divs;
    for(int i = 1; i * i <= x; ++i){
        if(x%i == 0){
            divs.pb(i);
            if(i != x/i) divs.pb(x/i);
        }
    }
    sort(divs.begin(),divs.end());
    return divs;
}

signed main(){ _
    int a, b;
    cin>>a>>b;
    int n;
    cin>>n;
    int mdc = __gcd(a,b);
    vector<int> divs = divisores(mdc);
    int qtd = divs.size();
    while(n--){
        int low;
        int high;
        cin>>low>>high;
        if(mdc < low){
            cout<<"-1\n";
            continue;
        }
        if(mdc < high){
            cout<<mdc<<'\n';
            continue;
        }
        for(int i = qtd - 1; i>=0; --i){
            if(divs[i] > high && i==0){
                cout<<"-1\n";
                break;
            }
            if(divs[i] > high) continue;
            if(divs[i] < low){
                cout<<"-1\n";
                break;
            }
            if(divs[i]>= low && divs[i]<=high){
                cout<<divs[i]<<'\n';
                break;
            }
        }
    }
    return 0;
}
