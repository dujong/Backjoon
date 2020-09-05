#include <stdio.h>

/* 피보나치 수열을 쓰기 위해서 재귀함수 fibo(n-2) + fibo(n-1)을 쓰면 되지만 함수를 불러내는 것은
 시간이 오래걸리기 때문에 재귀함수는 한 번만 쓰고 둘중 하나의 값을 가지고 있어야 함	
 반복문으로 하는것도 되지 않았다!!
 */

int fibo(int n, int* arr);

void main() {

	int F, arr[2]= {0,1};
	scanf("%d", &F);

	printf("%d", fibo(F,arr));
}


int fibo(int n, int* arr) {

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

	return result;
}