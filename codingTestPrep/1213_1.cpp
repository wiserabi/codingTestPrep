#include <bits/stdc++.h>

using namespace std;

string s, ret;
int cnt[26], flag;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> s;
	for (char a : s) cnt[a - 'A']++;

	int mid = -1;
	for (int i = 25; i >= 0; i--) {
		if (cnt[i]) {
			if (cnt[i] & 1) {
				mid = i;
				flag++;
				cnt[i]--;
			}
			if (flag == 2)break;
			for (int j = 0; j < cnt[i]; j += 2) {
				ret = char('A' + i) + ret;
				ret = ret + char('A' + i);
			}
		}
	}
	if (mid > -1) {
		ret.insert(ret.begin() + ret.size() / 2, char('A' + mid));
	}
	if (flag == 2) {
		cout << "I'm Sorry Hansoo\n";
	}
	else {
		cout << ret << "\n";
	}
	return 0;
}