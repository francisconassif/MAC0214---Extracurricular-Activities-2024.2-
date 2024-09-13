/*
Segment with Small Sum

Source: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
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

ll n, si; 

bool verifica(vector<ll> &prefix, ll index){
    int i = 1;
    int j = index;
    while(j <= n){
        if(prefix[j] - prefix[i-1] <= si) return true;
        else{
            i++;
            j++;
        }
    }
    return false;
}

signed main(){ _
    cin>>n>>si;
    vector<ll> a(n);
    vector<ll> prefix(n+1);
    prefix[0] = 0;
    ll sum = 0;
    ll partial_i = 0;
    ll el;
    bool stop = false;
    ll total = 0;
    FOR(i,0,n){
        cin>>el;
        total += el;
        prefix[i+1] = total;
        if(!stop && sum + el <= si){
            partial_i = i;
            sum+=el;
        }
        else stop = true;
    }
    if(total <= si) cout<<n<<endl;
    else{
        int lo = partial_i;
        int hi = n;
        int mid;
        int ans=0; 
        while(lo <= hi){
            mid = (lo + hi)/2;
            bool deu = verifica(prefix, mid);
            if(deu){
                ans = max(ans,mid);
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}


