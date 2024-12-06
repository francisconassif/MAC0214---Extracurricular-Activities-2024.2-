/*
Paris by Night - Source: https://codeforces.com/gym/102465/problem/F
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
typedef long double ld;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

constexpr double M_PI = 3.14159265358979323846;

struct Monument {
    ll x,y,g;
};

signed main() { _
    int n; cin >> n;
    vector<Monument> m(n);
    ll totalSum = 0;
    FOR(i,0,n){
        cin >> m[i].x >> m[i].y >> m[i].g;
        totalSum += m[i].g;
    }

    auto angle = [&](int B, int P) {
        ld dx = m[P].x - m[B].x;
        ld dy = m[P].y - m[B].y;
        ld ang = atan2l(dy, dx) * 180.0L/M_PI;
        if (ang < 0) ang += 360.0L;
        return (ld)ang;
    };

    ll ans = LINF;

    FOR(i,0,n){
        vector<pair<ld,ll>> arr; 
        arr.reserve(n-1);
        ll sumAll = 0;
        FOR(j,0,n){
            if (j == i) continue;
            ld ang = angle(i,j);
            arr.pb({ang,(ll)m[j].g});
            sumAll += m[j].g;
        }

        sort(arr.begin(), arr.end());

        int sz = (int)arr.size();
        arr.resize(2*sz);
        FOR(k,0,sz){
            arr[sz+k] = {arr[k].f+360.0L, arr[k].s};
        }

        vector<ll> prefix(2*sz+1,0);
        FOR(k,1,2*sz+1){
            prefix[k] = prefix[k-1] + arr[k-1].s;
        }

        FOR(j,0,sz){
            ld startAng = arr[j].f;
            ld limitAng = startAng + 180.0L - 1e-14L; 
          
            int endIdx = (int)(upper_bound(arr.begin()+j, arr.begin()+j+sz, make_pair(limitAng,LINF)) - arr.begin() - 1);

            if (endIdx < j) {
                endIdx = j;
            }

            ll sumHalf = prefix[endIdx+1] - prefix[j];
            ll gradeJ = arr[j].s;

            ll sumAllExcludingJ = sumAll - gradeJ;
            sumHalf -= gradeJ;

            ll diff = llabs(2LL*sumHalf - sumAllExcludingJ);
            if (diff < ans) ans = diff;
        }
    }

    cout << ans << "\n";

    return 0;
}
