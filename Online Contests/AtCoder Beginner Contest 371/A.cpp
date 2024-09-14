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
    int A;
    int B;
    int C;
    char entry;
    cin>>entry;
    if(entry == '<'){
        A = 10;
        B = 20;
    }
    else{
        A = 20;
        B = 10;
    }
    cin>>entry;
    if(entry == '<'){
        C = A+1;
    }
    else{
        C = A-1;
    }
    cin>>entry;
    if(entry == '<'){
        if(C < B) C = B + 1;
    }
    else{
        if(C > B) C = B -1;
    }
    set<pair<int,char>> abc;
    abc.insert({A,'A'});
    abc.insert({B,'B'});
    abc.insert({C,'C'});
    auto ans = abc.begin()++;
    ans++;
    cout<<(*ans).s<<endl;



    return 0;
}


