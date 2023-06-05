#include <bits/stdc++.h>

using namespace std;

long long int a, b, c;

long long int go(long long int pow) {
	long long int result;
	if (pow == 1) {
		result = a % c;
		return result;
	}
	result = go(pow / 2);
	result = (result * result) % c;
	if (pow % 2) {
		result = (result * a) % c;
	}
	return result;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c;
	cout << go(b) << "\n";
}