/*
Segment Tree for the Sum - Source: https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
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

struct SegmentTree {
    int n;
    vector<ll> tree;

    SegmentTree(int n) : n(n) {
        tree.resize(4*n, 0);
    }

    void build(vector<ll> &arr, int idx, int start, int end) {
        if (start == end) {
            tree[idx] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(arr, idx*2+1, start, mid);
        build(arr, idx*2+2, mid+1, end);
        tree[idx] = tree[idx*2+1] + tree[idx*2+2];
    }

    void build(vector<ll> &arr) {
        build(arr, 0, 0, n-1);
    }

    void update(int idx, int start, int end, int pos, ll val) {
        if (start == end) {
            tree[idx] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (pos <= mid) update(idx*2+1, start, mid, pos, val);
        else update(idx*2+2, mid+1, end, pos, val);
        tree[idx] = tree[idx*2+1] + tree[idx*2+2];
    }

    void update(int pos, ll val) {
        update(0, 0, n-1, pos, val);
    }

    ll query(int idx, int start, int end, int l, int r) {
        if (r < start || end < l) return 0; 
        if (l <= start && end <= r) return tree[idx];
        int mid = (start + end) / 2;
        ll q1 = query(idx*2+1, start, mid, l, r);
        ll q2 = query(idx*2+2, mid+1, end, l, r);
        return q1 + q2;
    }

    ll query(int l, int r) {
        return query(0, 0, n-1, l, r);
    }
};

int main(){ _
    int n,m; cin >> n >> m;
    vector<ll> arr(n);
    FOR(i,0,n) cin >> arr[i];

    SegmentTree seg(n);
    seg.build(arr);
    FOR(j, 0, m){
        int t; cin >> t;
        if (t == 1) {
            int i; ll v; cin >> i >> v;
            seg.update(i, v);
        }
        else {
            int l,r; cin >> l >> r;
            cout << seg.query(l, r-1) << "\n";
        }
    }

    return 0;
}
