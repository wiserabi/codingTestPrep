#include <bits/stdc++.h>

using namespace std;

long long int A, B, C;

int main() {
	cin >> A >> B >> C;
	bool pow[64] = { false };
	long long int mod[64] = { 0 };

	int max = 0;
	for (int i = 0; B > 0; i++) {
		if (B & 1) {
			pow[i] = true;
			max = i;
		}
		B = B >> 1;
	}
	
	long long int result = 1;
	mod[0] = A % C;
	if (pow[0]) {
		result = (result * mod[0]) % C;
	}
	for (int i = 1; i <= max; i++) {
		mod[i] = (mod[i - 1] * mod[i - 1]) % C;
		if (pow[i]) {
			result = (result * mod[i]) % C;
		}
	}
	cout << result << "\n";
}