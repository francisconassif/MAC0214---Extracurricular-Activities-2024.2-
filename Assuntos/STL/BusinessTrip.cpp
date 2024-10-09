/*
Problem: Business Trip

Source: codeforces.com/contest/149/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define int long long
#define FOR(i, a, n) for(int i = a; i < n; i++)

signed main(){ _
    int k; cin >> k;
    vector<int> a(12);
    FOR(i, 0, 12){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int days = 0;
    int total = 0;
    while(total < k && days <= 11){
        days++;
        total += a[days-1];
    }
    if(total < k){
        cout << -1 << endl;
    }
    else{
        cout << days << endl;
    }
    

    return 0;
}
