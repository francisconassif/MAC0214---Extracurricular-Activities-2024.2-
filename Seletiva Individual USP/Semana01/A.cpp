#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int somaint(int a){
    int soma = 0;
    while(a>0){
        soma+=a;
        a--;
    }
    return soma;
}

int main(){ _
    int n,k;
    cin>>n>>k;
    int soma = somaint(k);
    int soma2 = somaint(n);
    int x = soma*n;
    int y = soma2*100*k;
    cout<<x+y<<endl;
    return 0;
}
