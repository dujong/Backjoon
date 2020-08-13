#include <stdio.h>

void main() {

	//소수 찾기

	/*int N, number;
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
		return 0;*/
		// 소수
	int M, N, sum = 0, min = 0;
	int i, j, arr[10000] = { 0, };

	arr[0] = 1, arr[1] = 1;

	for (i = 2; i < 10000/2; i++) 
		for (j = i * i; j < 10000; j++) 
			if (j % i == 0) arr[j] = 1;


	scanf("%d %d", &M, &N);

	for (i = M; i < N+1; i++) {

		if (arr[i] == 0) {
			sum += i;

			if (min == 0) min = i;

		}
	}

	(sum == 0) ? printf("-1") : printf("%d\n%d", sum, min);
	return 0;

}