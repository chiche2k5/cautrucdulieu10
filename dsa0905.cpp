#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// input là số lượng đỉnh, cạnh

int n, m;
vector<int> adj[100001];
bool visited[100001]; // check xem đã thăm chưa

void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;

	// bước lặp
	while( !q.empty()){

		int v = q.front(); // lấy đỉnh đầu hàng đợi
		q.pop();
		cout << v << " ";
		for(int x : adj[v]){

			if( !visited[x]){

				q.push(x);
				visited[x] = true;

			}
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
	        adj[y].push_back(x); // vì là đồ thị vô hướng
	    }

	    memset(visited, false, sizeof(visited));

		bfs(u);
		cout << endl;
	}
}
