/*
Perfume - Source: https://www.spoj.com/problems/PERFUME/
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(long long i = a; i < n; i++)

typedef long long ll;
typedef pair<double, double> point;

const double EPS = 1e-6;

int ccw(point A, point B, point C) {
    double val = A.f * (B.s - C.s) - A.s * (B.f - C.f) + B.f * C.s - B.s * C.f;
    if (val > 0) return 1;
    if (val == 0) return 0;
    return -1;
}

double area(point A, point B, point C) {
    return fabs(A.f * (B.s - C.s) - A.s * (B.f - C.f) + B.f * C.s - B.s * C.f);
}

int main(){ _
    int t; cin >> t;
    FOR(caso, 0, t){
        if (caso) cout << "\n";
        int n; cin >> n;
        vector<point> C(2*n), E;
        FOR(i,0,n){
            double A,B; cin >> A >> B;
            E.push_back({A,B});
        }

        sort(E.begin(), E.end());
        int k = 0;
        FOR(i,0,n){
            while (k >= 2 && ccw(C[k - 2], C[k - 1], E[i]) <= 0) k--;
            C[k++] = E[i];
        }
        for (int i = n - 2, t = k + 1; i >= 0; i--){
            while (k >= t && ccw(C[k - 2], C[k - 1], E[i]) <= 0) k--;
            C[k++] = E[i];
        }
        C.resize(k - 1);
        C.push_back(C[0]);

        double total = 0;
        int tam = (int)C.size();
        FOR(i, 0, tam-1)
            total += C[i].f * C[i + 1].s - C[i].s * C[i + 1].f;
        total = fabs(total);

        vector<double> minx, miny;
        
        FOR(i,0,tam){
            minx.push_back(C[i].f);
            miny.push_back(C[i].s);
        }
        sort(minx.begin(), minx.end());
        sort(miny.begin(), miny.end());

        int q; cin >> q;
        while (q--) {
            double temp = 0;
            point davez;
            cin >> davez.f >> davez.s;
            if (davez.f < minx[0] || davez.f > minx.back() ||
                davez.s < miny[0] || davez.s > miny.back()) {
                cout << "No\n";
                continue;
            }
            FOR(i, 0, tam-1)
                temp += area(davez, C[i], C[i + 1]);
            if (fabs(temp - total) < EPS)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
