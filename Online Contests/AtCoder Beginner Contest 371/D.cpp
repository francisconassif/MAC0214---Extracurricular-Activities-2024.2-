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

int n;

int findindex(const std::vector<std::pair<int, int>> &vilas, int index){
    int lo = 0;
    int hi = n-1;
    while (lo <= hi){
        int mid = lo + (hi-lo)/2;
        if (vilas[mid].first == index){
            return mid;
        }
        if(vilas[mid].first < index){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return lo;
}

signed main(){ _
    cin>>n;
    vector<pair<int,int>> vilas(n);
    vector<ll> prefix(n+1,0);
    FOR(i,0,n){
        cin>>vilas[i].f;
    }
    FOR(i,0,n){
        cin>>vilas[i].s;
        prefix[i+1] = prefix[i] + vilas[i].s;

    }
    int q; cin>>q;
    int l,r;
    FOR(k,0,q){
        cin>>l>>r;
        int i = findindex(vilas,l);
        int j = findindex(vilas,r);
        if(vilas[j].f != r) j--;
        if(j < i) cout<<"0\n";
        else cout<<prefix[j+1]-prefix[i]<<endl;
    }
    

    return 0;
}


