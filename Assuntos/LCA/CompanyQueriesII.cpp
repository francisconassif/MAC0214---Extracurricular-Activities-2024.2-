/* 
Company Queries II - Source: https://cses.fi/problemset/task/1688
*/

#include <bits/stdc++.h>

using namespace std;

#define MAXP 32 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);	

vector<vector<int>> bss; 
vector<array<int, MAXP>> ps; 
vector<int> ls, rs; 
int c=0; 

void dfs(int a, int p) {

	ps[a][0] = p; 
	ls[a] = c++;

	for(int b : bss[a])
		if(b != p)
			dfs(b, a);

	rs[a] = c++;

}

int main() { _
	int qv, qq; 
	cin >> qv >> qq;

	bss.resize(qv);
	ps.resize(qv);
	ls.resize(qv);
	rs.resize(qv);

	for(int i=1; i<qv; i++) {
		int a, b; cin >> a;
		a--;
		bss[a].push_back(i);
		bss[i].push_back(a);
	}

	dfs(0,0);

	for(int j=0; j<MAXP-1; j++) {
		for(int i=0; i<qv; i++)
			ps[i][j+1] = ps[ps[i][j]][j];
	}

	for(int i=0; i<qq; i++) {

		int a, b; cin >> a >> b;
		a--; b--;

		if(ls[a] <= ls[b] && rs[b] <= rs[a]) 
			cout << a + 1 << '\n';

		else if(ls[b] <= ls[a] && rs[a] <= rs[b]) 
			cout << b + 1 << '\n';

		else { 
			int u = a;
			for(int j=MAXP-1; j>=0; j--) { 
				int v = ps[u][j]; 
				if(ls[v] > ls[b] || rs[b] > rs[v]) 
					u = v;
			}
			cout << ps[u][0]+1 << '\n';
		}

	}

	return 0;	
}
