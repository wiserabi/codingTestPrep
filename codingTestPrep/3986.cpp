#include <bits/stdc++.h>

using namespace std;

//����

/*
1. �Ȱ��� �ܾ �� Ȧ���������� �����ܾ �ƴ�
2. Ȧ������ �ܾ ���޾Ƽ� 3�� ������ �����ܾ �ƴ�
*/
string s;
int cnt;
int arr[3];

int main() {
	int num;
	int flag[2] = { 0 };
	int arr[3] = { 0 };

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> s;
		bool good = true;

		int aCnt = 0;
		int bCnt = 0;
		int consecutive = 0;

		for (int i = 0; i < s.size() + 1; i++) {
			if (i == 0) {
				flag[0] = flag[1] = int(s[i]);
			}
			else {
				flag[0] = flag[1];
				flag[1] = int(s[i]);
			}
			if (s[i] == 'A') {
				aCnt++;
			}
			else if (s[i] == 'B') {
				bCnt++;
			}

			if (flag[0] != flag[1]) {
				if (i > 2) {
					arr[0] = arr[1];
					arr[1] = arr[2];
					arr[2] = consecutive;
				}
				else {
					arr[i] = consecutive;
				}
				consecutive = 0;

				//Ȧ�� 3�� �˻�
				if (i >= 2 && (arr[0] & 1) && (arr[1] & 1) && (arr[2] & 1)) {
					good = false;
				}
			}
			consecutive++;
		}

		if ((aCnt & 1) || (bCnt & 1)) {
			good = false;
		}
		if (good) {
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}