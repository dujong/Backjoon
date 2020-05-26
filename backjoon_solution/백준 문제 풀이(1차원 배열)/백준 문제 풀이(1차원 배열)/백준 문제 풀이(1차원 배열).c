#include <stdio.h>

int main() {

	/*int N;			최소,최대값 구하기
	int min = 1000001;
	int max = -1000001;
	int target = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {

		scanf("%d", &target);

		if (target < min) {
			min = target;
		}

		if (target > max) {
			max = target;
		}
	}

	printf("%d %d", min, max);*/

	/*int N[9];			최댓값
	int result = 0;
	int number = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d",&N[i]);
		
			if (result < N[i]) {
			result = N[i];
			number = i + 1;
		}
		
	}

	printf("%d\n%d", result,number);*/

	/*int A, B, C,result;		숫자의 개수
	int arr[10] = { 0, };
	int k;

	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);

	result = A * B * C;

	while (result != 0) {
		k = result % 10;
		arr[k]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	/*int A[10], B[42] = { 0, };	서로 다른 나머지 갯수
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d",&A[i]);
		A[i] %= 42;
		B[A[i]]++;
	}

	for (int i = 0; i < 42; i++) {
		if (B[i] != 0)
			count++;
	}

	printf("%d", count);*/

	/*int N,max=0;		평균 사기치기
	float num[1000],avg=0;
	scanf("%d",&N);

	for (int i = 0; i < N; i++) {
		scanf("%f",&num[i]);
	}
	max = num[0];
	for (int i = 1; i < N; i++) {
		if (max < num[i])
			max = num[i];
	}

	for (int i = 0; i < N; i++) {
		num[i] = num[i] / max * 100;
		avg += num[i];
	}

	printf("%.2f", avg/N);*/

	int N, count = 0,sum=0;
	char c[80];
	int point[10] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", c);

		for (int j = 0; j < 80; j++) {
			if (c[i] == 'O' || c[i] == 'o') {
				count++;
				sum += count;
			}
			else
				count = 0;

		}
		point[i] = sum;
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", point[i]);
	}

	return 0;
}