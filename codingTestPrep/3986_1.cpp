#include <bits/stdc++.h>

using namespace std;

// 뒤집거나 돌려보거나 움직여보기
// 스택으로 푸는 문제였음..
// 문제에 짝짓기, 폭발이라는 단어가 들어가 있으면 스택 사용고려
string s;
int n;
int cnt;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		vector<char> stk;
		for (int i = 0; i < s.size(); i++) {
			if (!stk.empty() && stk[stk.size() - 1] == s[i]) {
				stk.pop_back();
			}
			else {
				stk.push_back(s[i]);
			}
		}

		if (stk.empty()) {
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}