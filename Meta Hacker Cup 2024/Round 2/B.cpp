#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

pair<int, int> findSequence(const vector<string>& table, char value){
    int rows = 6, cols = 7;
    pair<int, int> best_position = {-1, -1}; 
    int best_row = -1; 

    FOR(i,0,rows){
        FOR(j,0,cols-3){
            if (table[i][j] == value && table[i][j+1] == value && 
                table[i][j+2] == value && table[i][j+3] == value){
                if (i > best_row){ 
                    best_row = i;
                    best_position = {i, j};
                }
            }
        }
    }

    FOR(i,0,rows-3){
        FOR(j,0,cols){
            if(table[i][j] == value && table[i+1][j] == value && table[i+2][j] == value && table[i+3][j] == value){
                if(i > best_row){
                    best_row = i;
                    best_position = {i, j};
                }
            }
        }
    }

    FOR(i,0,rows-3){
        FOR(j,0,cols-3){
            if (table[i][j] == value && table[i+1][j+1] == value && 
                table[i+2][j+2] == value && table[i+3][j+3] == value) {
                if(i > best_row){
                    best_row = i;
                    best_position = {i, j};
                }
            }
        }
    }

    FOR(i,3,rows){
        FOR(j,0,cols-3){
            if (table[i][j] == value && table[i-1][j+1] == value && table[i-2][j+2] == value && table[i-3][j+3] == value){
                if(i - 3 > best_row){
                    best_row = i - 3;
                    best_position = {i - 3, j};
                }
            }
        }
    }
    return best_position;
}

int main() { _
    int caso = 0;
    int t; cin >> t;
    while(t--){
        caso++;
        vector<string> table(6);
        FOR(i, 0, 6) {
            cin >> table[i];
        }

        pair<int, int> connie = findSequence(table, 'C');
        pair<int,int> forrest = findSequence(table, 'F');

        char res; 

        if(connie.f == forrest.f && forrest.f == -1) res = '0';
        else if(connie.f > forrest.f) res = 'C';
        else if(forrest.f > connie.f) res = 'F';
        else res = '?';

        cout<<"Case #"<<caso<<": "<<res<<endl;
    }

    return 0;
}
