/*
Rooms and Passages

Source: https://codeforces.com/gym/102215/problem/A
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
    int n; cin>>n;
    vector<int> respostas(n,0);
    respostas[n-1]=1;
    vector<int> passagem(n);
    FOR(i,0,n){
        int el;
        cin>>el;
        passagem[i] = el;
    }
    multiset<int> usadas;
    int i = 0;
    bool just_inc = false;
    FOR(j,0,n){
        if(i >= n) break;
        just_inc = false;
        if(usadas.find(abs(passagem[j]))==usadas.end()){
            respostas[i]++;
            if(passagem[j] < 0) usadas.insert(abs(passagem[j]));
        }
        else if(passagem[j] < 0){
            respostas[i]++;
            usadas.insert(abs(passagem[j]));
        }
        else if(passagem[j] > 0){
            i++;
            just_inc = true;
            respostas[i]=respostas[i-1]-1;
            if(passagem[i-1] < 0){
                auto it = usadas.find(abs(passagem[i-1]));
                if(it != usadas.end()) usadas.erase(it);
            }
        }
        if(just_inc){
            j--;
        }

    }
    FOR(j,i,n){
        respostas[j] = n - j;
    }
    for(auto elem : respostas){
        cout<<elem<<' ';
    }
    cout<<'\n';
    return 0;
}


