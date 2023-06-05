#include <bits/stdc++.h>

using namespace std;

int N;
int K;
int sum;
vector<int> v(1, 0);

int main() {
	cin >> N;
	cin >> K;
	int max = INT32_MIN;
	for (int i = 1; i <= N; i++) {
		int temp;
		cin >> temp;
		sum += temp;
		v.push_back(sum);
		if (i >= K) {
			int ksum = v[i] - v[i - K];
			if (ksum > max) {
				max = ksum;
			}
		}
	}
	cout << max;
	return 0;
}