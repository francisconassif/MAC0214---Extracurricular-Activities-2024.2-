#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define FOR(i, a, n) for(ll i = a; i < n; i++)

typedef long long ll;

int main(){ _
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        bool yes = true;
        bool mvzero = false;
        ll seq[n];
        FOR(i,0,n){
            cin>>seq[i];
            if(!yes) continue;
            if(i > 1){
                if(seq[i-1]+1 == seq[i]) continue;
                else{
                    if(seq[i-1]+2 == seq[i]) seq[i]--;
                    else if(seq[i] - seq[i-1] == 3){
                        if(mvzero) yes = false;
                        else{
                            FOR(j,0,i) seq[j]++;
                            seq[i]--;
                        }
                        mvzero = true;

                    }
                    else yes = false;
                }
            }
            if(i == 1){
                if(seq[0]+1 == seq[1]) continue;
                else if(seq[0]+2 == seq[1]){
                    seq[0]++;
                    mvzero=true;
                }
                else if(seq[0]+3 == seq[1]){
                    seq[0]++;
                    seq[1]--;
                    mvzero = true;
                }
                else if(seq[1] - seq[0] > 3) yes = false;
            }
        }
        if(yes) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
