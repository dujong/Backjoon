#include <stdio.h>

int main() {

	/*int num[5];		평균 점수
	int sum=0;
	for (int i = 0; i < 5; i++) {
		scanf("%d",&num[i]);
		if (num[i] < 40)
			num[i] = 40;
		sum += num[i];
	}

	printf("%d ", sum / 5);*/

	/*int num1[3], num2[2];		최솟값 구하기
	int max1=9999, max2=9999;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num1[i]);

		if (max1 > num1[i])
			max1 = num1[i];
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &num2[i]);

		if (max2 > num2[i])
			max2 = num2[i];
	}
	printf("%d", max1 + max2 - 50);*/

	/*int A, B, C;		중간 값 구하기
	int arr[3];
	scanf("%d %d %d",&A,&B,&C);

	if (A >= B&& A <= C || A<=B && A>=C)
		printf("%d", A);

	else if (B >= A&& B <= C || B <= A && B >= C)
		printf("%d", B);

	else if (C >= A&& C <= B || C >= B&& C <= A)
		printf("%d", C);*/

	/*int N;		별 그리기
	scanf("%d",&N);
	for (int i = 0; i < (2*N-1); i++) {

		if (i < N) {
			for (int j = 0; j <= i; j++) {
				printf("*");
			}
		}

		else if (i >= N)
		{
			for (int j = 0; j< 2 * N - 1 - i; j++) {
				printf("*");
			}
		}

		printf("\n");
	}*/

	/*int N;		별 찍기
	scanf("%d",&N);

	for (int i = 0; i < N; i++) {
	
			for (int j = 0; j < i; j++) {
				printf(" ");
			}

			for (int j = 0; j < N * 2 - 1 - i * 2; j++) {
				printf("*");
			}

			printf("\n");
		}

	for (int i = 0; i < N - 1; i++) {

		for (int j = 0; j < N - 2 - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < 1+(i+1)*2; j++) {
			printf("*");
		}

		printf("\n");
	}*/

	/*int N;			별그리기
	scanf("%d", &N);

	for (int i = 1; i <= N * 2; i++) {
		if (i % 2 != 0) {
			for (int j = 1; j <= (N + 1) / 2; j++) {
				printf("* ");
			}
		}

		else {
			for (int j = 1; j <= N/2; j++) {
				printf(" *");
			}
		}
		printf("\n");
	}

	return 0;*/
}