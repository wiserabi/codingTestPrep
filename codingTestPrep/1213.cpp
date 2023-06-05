#include<bits/stdc++.h>

using namespace std;

string name;
int arr[26];
int main() {
	cin >> name;
	
	if (name.size() == 1) {
		cout << name;
		exit(0);
	}
	
	for (int i = 0; i < name.size(); i++) {
		arr[name[i] - 'A']++;
	}
	
	//&1을 했을때 true값이라면 홀수
	int odd = -1;
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] & 1) {
			odd = i;
			cnt++;
		}
	}
	//불가능
	if (cnt > 1) {
		cout << "I'm Sorry Hansoo";
		exit(0);
	}
	
	//절반출력
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = 0; j < int(arr[i] / 2); j++) {
			cout << char('A' + i);
		}
	}
	
	if (cnt == 1) {
		cout << char('A' + odd);
	}
	//나머지 절반출력
	for (int i = 25; i > -1; i--) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = 0; j < int(arr[i] / 2); j++) {
			cout << char('A' + i);
		}
	}
	return 0;
}