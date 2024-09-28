/*
Number of Smaller

Source: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
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
    vector<int> a(n);
    FOR(i,0,n){
        cin>>a[i];
    }
    int i,j;
    i = 0;
    j = 0;
    int curr; cin>>curr;
    if(curr > a[0]) i = 1;
    while(true){
        if(j == m) break;
        if(i == n){
            while(j < m){
                cout<<i<<' ';
                if(j != m-1) cin>>curr;
                j++;
            }
            break;
        }
        if(curr>a[i]){
            i++;
        }
        else{
            j++;
            cout<<i<<' ';
            if(j != m) cin>>curr;
        }
    }
    cout<<'\n';

    return 0;
}


