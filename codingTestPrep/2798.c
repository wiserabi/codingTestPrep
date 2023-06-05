#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int M;
int N;
int sum;
int max;

void combi(int* card, int start, int depth) {
	if (depth == 3) {
		if (sum <= M && sum > max) {
			max = sum;
		}
		return;
	}
	for (int i = start; i < N; i++) {
		sum += card[i];
		combi(card, i + 1, depth + 1);
		sum -= card[i];
	}
}

int main() {
	int card[100] = { 0 };

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", card + i);
	}
	combi(card, 0, 0);
	
	printf("%d\n", max);
	return 0;
}