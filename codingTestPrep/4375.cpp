#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

using namespace std;

long long mod;

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		long long num = 1;
		int cnt = 0;
		while (true) {
			mod = num % N;
			cnt++;
			if (mod == 0) {
				cout << cnt << "\n";
				break;
			}
			num = 10 * num + 1;
		}
	}
}