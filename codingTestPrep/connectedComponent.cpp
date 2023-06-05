#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[100][100];
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void dfs(int y, int x, const vector<vector<int>> v) {
	visited[y][x] = true;
	cout << y << " : " << x << "\n";
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny >= n || ny < 0 || nx >= m || nx < 0) {
			continue;
		}
		if (!visited[ny][nx] && v[ny][nx]) {
			dfs(ny, nx, v);
		}
	}
}

int main() {
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && v[i][j]) {
				dfs(i, j, v);
				cout << "dfs complete\n";
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}