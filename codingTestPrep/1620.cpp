#include <bits/stdc++.h>

using namespace std;

int N; //도감 포켓몬 수 1 ~ 100000
int M;// 문제의 개수 1 ~ 100000
// 1번 ~ N번

map<string, int> m;
string a[100004];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	string s;
	for (int i = 1; i <= N; i++) {
		cin >> s;
		m[s] = i;
		a[i] = s;
	}

	for (int i = 0; i < M; i++) {
		cin >> s;
		//숫자인 경우
		int num = atoi(s.c_str());
		if (num) {
			cout << a[num] << "\n";
		}
		else {
			cout << m[s] << "\n";
		}
	}
	return 0;
}