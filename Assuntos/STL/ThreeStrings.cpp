/*
Three Strings

Source: https://codeforces.com/problemset/problem/1301/A
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        string a, b, c;
        cin>>a>>b>>c;
        int n = a.size();
        bool possible = true;
        for(int i = 0; i < n; ++i){
            if(a[i] == b[i]){
                if(c[i]!=a[i]){
                    possible = false;
                    break;
                }
            }
            else{
                if(c[i]!=a[i] && c[i]!=b[i]){
                    possible = false;
                    break;
                }
            }
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
