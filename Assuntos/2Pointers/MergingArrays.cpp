/*
Merging Arrays

Source: https://codeforces.com/edu/course/2/lesson/9/1/practice/status
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
    int n,m; cin>>n>>m;
    vector<int> a(n+m);
    FOR(i,0,n+m){
        cin>>a[i];
    }
    int i = 0;
    int j = n;
    FOR(k,0,n+m){
        if(j == n+m){
            while(i < n){
                cout<<a[i]<<' ';
                i++;
            }
            break;
        }
        if(i == n){
            while(j < n+m){
                cout<<a[j]<<' ';
                j++;
            }
            break;
        }
        if(a[i] > a[j]){
            cout<<a[j]<<' ';
            j++;
        }
        else{
            cout<<a[i]<<' ';
            i++;
        }
    }
    cout<<'\n';

    return 0;
}


