#include <stdio.h>

void main() {

	//소수 찾기

	int N, number;
	int count = 0;
	int i,j;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {

		scanf("%d", &number);

		for (j = 2; j < number; j++) {
			if (number % j == 0) break;
		}
		if (number == j) count++;
	}
		printf("%d", count);
		return 0;
}