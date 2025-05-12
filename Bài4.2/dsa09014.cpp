#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// input là sl đỉnh, cạnh

int n, m;
vector<int> adj[100001];
bool visited[100001]; // check xem đã thăm chưa

bool dfs(int u, int par){
	visited[u] = true;

	for(int v : adj[u]){

		if( !visited[v]){
			if(dfs(v, u)) return true;
		}
		else if( v != par){

			return true;
		}
	}
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;

		for (int i = 1; i <= n; i++) adj[i].clear();
		for (int i = 0; i < m; i++) {
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		memset(visited, false, sizeof(visited));

		bool hasCycle = false;
		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				if(dfs(i, 0)) {
					hasCycle = true;
					break; // có chu trình rồi thì không cần kiểm tra tiếp
				}
			}
		}
		cout << (hasCycle ? "YES" : "NO") << endl;
		cout << endl;
	}
}

