#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// input là số lượng đỉnh, cạnh

int n, m;
vector<int> adj[100001];
bool visited[100001]; // check xem đã thăm chưa


void dfs(int u){

	cout << u << " ";

	visited[u] = true;

	for(int v : adj[u]){

		if(!visited[v]){
			dfs(v);
		}
	}
}

int main(){
	int t; cin >> t; while(t--){
		int n,m,u; 
		cin >> n >> m >> u;

	    for (int i = 1; i <= n; i++) {
	        adj[i].clear();
	    }

	    for (int i = 0; i < m; i++) {
	        int x, y; cin >> x >> y;
	        adj[x].push_back(y);
	        adj[y].push_back(x);

	    }

	    memset(visited, false, sizeof(visited));

		dfs(u);
		cout << endl;
	}
}
