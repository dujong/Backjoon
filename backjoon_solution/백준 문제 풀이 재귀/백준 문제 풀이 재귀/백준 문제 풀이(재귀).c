#include <stdio.h>

/* 피보나치 수열을 쓰기 위해서 재귀함수 fibo(n-2) + fibo(n-1)을 쓰면 되지만 함수를 불러내는 것은
 시간이 오래걸리기 때문에 재귀함수는 한 번만 쓰고 둘중 하나의 값을 가지고 있어야 함	
 반복문으로 하는것도 되지 않았다!!
 */

//int fibo(int n, int* arr);
//int star();

char arr[2201][2201];

void main() {
	// 피보나치 수열 5

	/*int F, arr[2]= {0,1};
	scanf("%d", &F);

	printf("%d", fibo(F,arr));*/

	/*int fibo(int n, int* arr) {

	int result;

	if (n == 0)
		return arr[0];
	else if (n == 1)
		return arr[1];

	else {
		fibo(n - 1, arr);
		result = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = result;
	}

	return result;*/

	int N;
	scanf("%d", &N);

	memset(arr, ' ', sizeof(arr));


	star(0,0,N);


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}


int star(int y, int x, int N) {

	if (N == 1) {
		arr[y][x] = '*';
		return;
	}

	int div = N / 3;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cnt++;
			if(cnt != 5)
				star(y + (i * div), x + (j * div), div);
		}
	}

}