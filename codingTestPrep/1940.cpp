#include <bits/stdc++.h>

using namespace std;

int N;
int M;
int temp;
int cnt;

map<int, int> m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		m[temp] = temp;
	}
	
	for(auto& it : m) {
		//found
		if (m.find(M - it.first) != m.end()) {
			cnt++;
		}
	}
	cout << int(cnt / 2);
	return 0;
}