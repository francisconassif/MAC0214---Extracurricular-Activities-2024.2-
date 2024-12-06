/*
Windy Path - Source: https://codeforces.com/gym/101201/attachments
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

struct Point {
    int x,y,id;
};

int n;
vector<Point> pts;
string turns;

ll orientation(const Point &A, const Point &B, const Point &C) {
    ll val = (ll)(B.x - A.x)*(C.y - A.y) - (ll)(B.y - A.y)*(C.x - A.x);
    return val;
}

bool onSegment(const Point &A, const Point &B, const Point &C) {
    return min(A.x,B.x) <= C.x && C.x <= max(A.x,B.x) && min(A.y,B.y) <= C.y && C.y <= max(A.y,B.y);
}

bool segmentsIntersect(const Point &A, const Point &B, const Point &C, const Point &D) {
    ll o1 = orientation(A,B,C);
    ll o2 = orientation(A,B,D);
    ll o3 = orientation(C,D,A);
    ll o4 = orientation(C,D,B);

    if (o1*o2<0 && o3*o4<0) return true;
    if (o1 == 0 && onSegment(A,B,C)) return true;
    if (o2 == 0 && onSegment(A,B,D)) return true;
    if (o3 == 0 && onSegment(C,D,A)) return true;
    if (o4 == 0 && onSegment(C,D,B)) return true;
    return false;
}

vector<int> route;
vector<bool> used;

bool check_intersect(int k, const Point &P) {
    int sz = (int)route.size();
    FOR(i, 0, sz-2){
        Point A = pts[route[i]], B = pts[route[i+1]];
        Point C = pts[route[sz-1]], D = P;
        if (segmentsIntersect(A,B,C,D)) return true;
    }
    return false;
}

bool dfs() {
    int sz = (int)route.size();
    if (sz == n) return true; 
    FOR(i,0,n){
        if (used[i]) continue;
        if (sz >= 2){
            Point A = pts[route[sz-2]];
            Point B = pts[route[sz-1]];
            Point C = pts[i];
            ll o = orientation(A,B,C);
            char required = turns[sz-2]; 
            if (required == 'L' && o <= 0) continue; 
            if (required == 'R' && o >= 0) continue; 
        }
        if (sz >= 1 && check_intersect(sz, pts[i])) continue;

        used[i] = true;
        route.pb(i);
        if (dfs()) return true;
        route.pop_back();
        used[i] = false;
    }

    return false;
}

signed main() { _
    cin >> n;
    pts.resize(n);
    FOR(i,0,n){
        cin >> pts[i].x >> pts[i].y;
        pts[i].id = i+1;
    }
    cin >> turns;

    FOR(start,0,n){
        FOR(segundo,0,n){
            if (segundo == start) continue;
            used.assign(n,false);
            route.clear();
            used[start] = true;
            used[segundo] = true;
            route.pb(start);
            route.pb(segundo);
            if (dfs()) {
                for (auto idx : route) cout << pts[idx].id << " ";
                cout << "\n";
                return 0;
            }
        }
    }

    cout << -1 << "\n";
    return 0;
}
