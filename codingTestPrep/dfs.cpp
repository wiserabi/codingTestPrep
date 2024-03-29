#include <bits/stdc++.h>

using namespace std;

bool visited[5];
vector<int> adj[5];
void dfs(int u) {
	visited[u] = true;
	cout << u << "\n";
	for (auto v : adj[u]) {
		if (!visited[v]) {
			dfs(v);
		}
	}
	cout << u << "로부터 시작된 함수가 종료되었습니다\n";
}

int main() {
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);
	dfs(1);
	return 0;
}