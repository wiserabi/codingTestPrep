#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void printV(vector<int>& v, int r) {
	for (int i = 0; i < r; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

void makePermutation(vector<int>& v, int n, int r, int depth) {
	if (r == depth) {
		printV(v, r);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(v, n, r, depth + 1);
		swap(v[i], v[depth]);
	}
	return;
}

int main() {
	//vector<int> v;
	//for (int i = 1; i <= 5; i++) {
	//	v.push_back(i);
	//}
	//for (int a : v) cout << a << " ";
	//cout << "\n";
	//do {
	//	for (int i : v) cout << i << " ";
	//	cout << '\n';
	//} while (next_permutation(v.begin(), v.end()));

	int a[] = { 1, 2, 3 };
	do {
		for (int i : a) cout << i << " ";
		cout << '\n';
	} while (next_permutation(a, a + 3));

	cout << '\n';
	vector<int> v = { 2, 1, 4, 3};
	sort(v.begin(), v.end());
	/*

	do {
		for (int i = 0; i < 2; i++) {
			cout << v[i] << " ";
		}
		cout << '\n';
		//for (int i : v) cout << i << " ";
		//cout << '\n';
	} while (next_permutation(v.begin(), v.end()));
	*/

	makePermutation(v, 4, 4, 0);
}