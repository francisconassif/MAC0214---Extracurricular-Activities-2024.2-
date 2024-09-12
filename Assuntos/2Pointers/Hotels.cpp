/*
Hotels along the Croatian coast

Sphere Online Judge: https://www.spoj.com/problems/HOTELS/
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

signed main(){ _
    ll m, n; cin>>n>>m;
    vector<ll> hotel(n);
    ll sum = 0;
    ll max_i = 0;
    ll max_s = 0;
    ll min_i = 0;
    bool minel = true;
    FOR(i,0,n){
        cin>>hotel[i];
        if(hotel[i] > m && minel){
            continue;
        }
        else if(hotel[i] < m && minel){
            minel = false;
            min_i = i;
        }
        sum += hotel[i];
        if(sum <= m){
            max_i = i;
            max_s = sum;
        }
    }
    if(sum <= m){
        cout<<sum<<endl;
        return 0;
    }
    ll i, j;
    i = min_i;
    j = max_i+1;
    ll curr = max_s;
    while(j < n && i < n){
        if(curr + hotel[j] > m){
            curr-=hotel[i];
            if(i == j){
                i++;
                j++;
            }
            else i++;
        }
        else{
            curr += hotel[j];
            j++;
            if(curr > max_s){
                max_s = curr;
            }
        }
    }
    cout<<max_s<<'\n';



    return 0;
}


