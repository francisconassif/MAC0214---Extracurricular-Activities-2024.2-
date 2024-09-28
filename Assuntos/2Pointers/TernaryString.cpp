/*
Ternary String

Source: https://codeforces.com/contest/1354/problem/B
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

int verifica(string word, int tam){
    map<char,int> qtd;
    qtd['1'] = 0;
    qtd['2'] = 0;
    qtd['3'] = 0;
    FOR(i, 0, tam){
        qtd[word[i]]++;
        if(qtd['1'] > 0 && qtd['2'] > 0 && qtd['3'] > 0) return i+1;
    }
    FOR(i, tam, word.length()){
        qtd[word[i-tam]]--;
        qtd[word[i]]++;
        if(qtd['1'] > 0 && qtd['2'] > 0 && qtd['3'] > 0) return tam;
    }
    return 0;
}

signed main(){ _
    int n; cin>>n;
    FOR(i,0,n){
        string word; 
        cin>>word;
        int tmax = word.length();
        int tmin = 3;
        int ans = verifica(word,tmax);
        if(ans == 0){
            cout<<"0\n";
            continue;
        }
        int lo, mid, hi;
        lo = tmin;
        hi = ans;
        int minans=ans;
        while(lo < hi){
            mid = (hi + lo)/2;
            ans = verifica(word, mid);
            if(ans <= minans && ans != 0) minans = ans;
            if(ans == 0){
                lo = mid+1;
            }
            else{
                hi = mid;
            }
        }
        cout<<minans<<'\n';
    }

    return 0;
}


