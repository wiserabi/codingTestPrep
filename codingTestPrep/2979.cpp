#include <bits/stdc++.h>

using namespace std;

int arr[101];
int start, leave;
int result;

//시작 - 끝 => 이상 - 미만
int main() 
{
	//주차요금 A B C
	int A, B, C;
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++) {
		cin >> start >> leave;
		for (int i = start; i < leave; i++) {
			arr[i]++;
		}
	}
	
	for (int i = 0; i < 101; i++) {
		if (arr[i] == 1) {
			result += A;
		}
		else if (arr[i] == 2) {
			result += B * 2;
		}
		else if (arr[i] == 3) {
			result += C * 3;
		}
	}
	cout << result;
	return 0;
}