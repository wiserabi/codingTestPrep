#include <bits/stdc++.h>

int t;
int n;

using namespace std;
//경우의 수는 long long을 사용
int main() {
	string name;
	string type;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		map<string, int> m;
		for (int j = 0; j < n; j++) {
			cin >> name >> type;
			if (m.find(type) == m.end()) {
				m[type] = 1;
			}
			else {
				m[type]++;
			}
		}
		int sum = 1;
		for (auto& it : m) {
			sum *= (it.second + 1);
		}
		cout << ""<< sum - 1 << "\n";
	}
	return 0;
}