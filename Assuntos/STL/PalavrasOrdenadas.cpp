/*
Problem: PALAVRAMG - Palavras Ordenadas

Source: br.spoj.com/problems/PALAVRAMG/
*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)

signed main(){ _
    int n; cin >> n;
    while(n--){
        string a; cin >> a;
        string b = a;
        int tam = a.size();
        if(a[0] - 'a' < 0) a[0] = a[0] + 32;
        bool broke = false;
        FOR(i, 1, tam){
            if(a[i] - 'a' < 0) a[i] = a[i] + 32;
            if(a[i] <= a[i-1]){
                cout<<b<<": N\n";
                broke = true;
                break;
            }
        }
        if(!broke) cout<<b<<": O\n";
    }
    

    return 0;
}
