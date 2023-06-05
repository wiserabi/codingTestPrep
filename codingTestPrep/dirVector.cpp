#include <bits/stdc++.h>

using namespace std;

int arr[3][3];
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
bool visited[3][3];

void go(int y, int x) {
	if (visited[y][x]) {
		return;
	}
	cout << y << " : " << x << "\n";
	visited[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if (ny > -1 && ny < 3 && nx > -1 && nx < 3 
			&& (!visited[ny][nx]) && arr[ny][nx]) {
			go(ny, nx);
		}
	}
}
int main() {
	for (int i = 0; i < 3; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	cout << "\n";
	go(0, 0);
	return 0;
}