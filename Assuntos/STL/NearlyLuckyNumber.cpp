/*
Nearly Lucky Number - Source: https://codeforces.com/contest/110/problem/A
*/

#include <iostream>
using namespace std;
long long potencia(long long b, long long n) {
    long long x = 1;
    for (long long i = 0; i < n; i++) {
        x *= b;
    }
    return x;
}
int main(){
    long long a;
    bool x=false;
    cin>>a;
    if (a>1000){
        long long u,d,l;
        u=0;
        d=0;
        l=0;
        while((potencia(10,u)<a)&&(l<=7)){
            d=(a/potencia(10,u))%10;
            if((d==4)||(d==7)){
                l++;
            }
            u++;
        }
        if((l==4)||(l==7)){
            x=true;
        }
    }
    if(x){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;  
}
