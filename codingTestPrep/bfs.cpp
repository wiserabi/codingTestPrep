#include <bits/stdc++.h>

using namespace std;

int n, m;
int y, x;
int cy, cx;
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
int visited[100][100];
//가중치가 같은 그래프일때는 bfs
int main() {
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 0));
	cin >> y >> x;
	cin >> cy >> cx;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	visited[y][x] = 1;
	while (!q.empty()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= m) {
				continue;
			}
			if (v[ny][nx] && !visited[ny][nx]) {
				q.push(make_pair(ny, nx));
				visited[ny][nx] = visited[y][x] + 1;
				if (ny == cy && nx == cx) {
					cout << visited[ny][nx] << "\n";
					exit(0);
				}
			}
		}
	}

	return 0;
}