#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main() {
	for (int i = 1; i <= 5; i++) {
		v.push_back(i);
		v.push_back(i);
	}
	for (int i : v) cout << i << " ";
	cout << "\n";
	// �ߺ����� ���� ��ҷ� ä�� ��, �� ���� ���ͷ����� ��ȯ
	auto it = unique(v.begin(), v.end());
	cout << it - v.begin() << "\n";
	// �տ��� ���� �ߺ����� �ʰ� ä�� �� ������ ��ҵ��� �״�� �д�
	for (int i : v) cout << i << " ";
	cout << "\n";

	vector<int> c{ 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 };
	// sort and erase
	sort(c.begin(), c.end());
	c.erase(unique(c.begin(), c.end()), c.end());
	for (int i : c) cout << i << " ";
	cout << "\n";

	return 0;
}