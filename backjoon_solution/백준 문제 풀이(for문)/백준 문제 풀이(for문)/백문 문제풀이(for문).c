#include <stdio.h>

int main() {

	/*int A,i;		구구단
	scanf("%d",&A);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", A, i, A * i);
	}*/

	/*int A, B, i;		A+B 반복출력

	scanf("%d", &i);

	for (; i > 0; i--) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}*/			

	/*int n,i,result=0;		
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		result += i;
	}
	printf("%d", result);*/

	/*int N,i;	N까지 출력
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		printf("%d\n", i);*/

	/*int N, i;	N부터 0까지 출력
	scanf("%d", &N);

	for (i = 1; i <= N; N--)
		printf("%d\n", N);*/

	/*int A, B, i,j=1;		//A + B 반복출력

		scanf("%d", &i);

	for (; i > 0; i--) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n",j, A + B);
		j++;
	}*/

	/*int A, B, C, i, x = 1;		A + B 반복출력
	scanf("%d", &i);
	for (; i > 0; i--) {
		scanf("%d %d", &A, &B);
		C = A + B;
		printf("Case #%d: %d + %d = %d\n", x,A,B C);
		x++;
	}*/

	/*int N;		별그리기
	int i, j,k=1;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < k; j++) {
			printf("*");
		}
		printf("\n");
		k++;
	}*/

	/*int N;		별 찍기
	int i, j, k,w=1;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {

		for (k = N-i; k > 1; k--) {
			printf(" ");
		}

		for (j = 0; j < w; j++) {
			printf("*");
		}
		w++;
		printf("\n");
	}*/

	/*int N, X, num, i;		X보다 작은 수
	scanf("%d %d", &N,&X);

	for (i = 0; i < N; i++) {
		scanf("%d",&num);
		if (num < X)
			printf("%d ",num);
	}
	return 0;*/
}