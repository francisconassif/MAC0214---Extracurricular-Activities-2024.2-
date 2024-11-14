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
    ifstream inputFile("breedflip.in"); 
    int tamanho;
    string str1, str2;

    
    inputFile >> tamanho;
    inputFile.ignore();

    getline(inputFile, str1);
    getline(inputFile, str2);

    inputFile.close(); 

    int cont = 0;
    int i = 0; 
    bool dif = false; 
    while(i < tamanho){
        if(dif && str1[i] != str2[i]){
            i++;
        }
        else if(dif && str1[i] == str2[i]){
            dif = false;
            i++;
        }
        else if(str1[i] != str2[i]){
            cont++;
            dif = true;
            i++;
        }
        else{
            i++;
        }
    }
    ofstream outputFile("breedflip.out"); 

    
    outputFile << cont << endl;

    outputFile.close(); 

    
    return 0;
}
