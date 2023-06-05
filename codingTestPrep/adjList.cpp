#include <bits/stdc++.h>

using namespace std;

vector<int> v[5];
bool visited[5];

void go(int i) {
	cout << i << "\n";
	visited[i] = true;
	for (auto& it : v[i]) {
		if (!visited[it]) {
			go(it);
		}
	}
}

int main() {
	v[1].push_back(2);
	v[1].push_back(3);

	v[2].push_back(1);

	v[3].push_back(1);
	v[3].push_back(4);

	for (int i = 0; i < 5; i++) {
		if (!v[i].empty() && !visited[i]) {
			go(i);
			break;
		}
	}
	return 0;
}