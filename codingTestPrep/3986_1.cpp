#include <bits/stdc++.h>

using namespace std;

// �����ų� �������ų� ����������
// �������� Ǫ�� ��������..
// ������ ¦����, �����̶�� �ܾ �� ������ ���� �����
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