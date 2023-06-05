#include <bits/stdc++.h>

using namespace std;

int adj[10][10];
bool visited[10];
vector<int> v;
void dfs() {
	if (v.empty()) {
		return;
	}
	int k = v[v.size() - 1];
	cout << k << "\n";
	v.pop_back();
	for (int i = 0; i < 10; i++) {
		if (adj[k][i] && !visited[i]) {
			v.push_back(i);
			visited[i] = true;
		}
	}
	dfs();
}

int main() {

	adj[1][2] = 1;
	adj[2][1] = 1;

	adj[1][3] = 1;
	adj[3][1] = 1;

	adj[3][4] = 1;
	adj[4][3] = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (adj[i][j] && !visited[i]) {
				v.push_back(i);
				visited[i] = true;
				dfs();
				break;
			}
		}
	}
}