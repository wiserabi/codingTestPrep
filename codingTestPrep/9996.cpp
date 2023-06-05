#include <bits/stdc++.h>

using namespace std;

int cnt;
string patt;
string s;
//DA NE

int main() {
	cin >> cnt;
	cin >> patt;

	int pos = patt.find('*');
	for (int i = 0; i < cnt; i++) {
		cin >> s;

		string prefix = patt.substr(0, pos);
		string suffix = patt.substr(pos + 1, patt.size() - 1);
		// size에 대한 반례가 있을수 있음 ab*ab, ab
		if (prefix.size() + suffix.size() > s.size()) {
			cout << "NE\n";
		}
		else if (prefix == s.substr(0, prefix.size()) && 
				suffix == s.substr(s.size() - suffix.size(), s.size())) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}
	return 0;
}