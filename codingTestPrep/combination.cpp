#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[5] = { 1,2,3,4,5 };

void print(vector<int> b) {
	for (int i : b) cout << i << " ";
	cout << "\n";
}
void combi(int start, vector<int> b) {
	if (b.size() == k) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
}

void combi1(int arr[]) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				cout << i << " " << j << " " << k << "\n";
			}
		}
	}
}
int main() {
	vector<int> b;
	combi(-1, b);
	//combi1(a);
	return 0;
}