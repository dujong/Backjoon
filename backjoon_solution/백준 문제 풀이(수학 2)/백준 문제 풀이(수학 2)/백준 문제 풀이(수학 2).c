#include <stdio.h>



int  main(void) {

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
	/*int M, N, sum = 0, min = 0;
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
	return 0;*/

	//소수 구하기
/*

	static int arr[1000001] = { 1,1,1, };

	int M, N;
	int i, j;

	 scanf("%d %d", &M, &N);
	 
	 if (M <= 2 && N >= 2)
		 printf("2\n");

	 for (i = 2; i <= N; i++) {
		 for (j = i+i; j <= N; j += i) {
			 if (arr[j] != 1)
				 arr[j] = 1;
		 }
	}

	 


	for (i = M; i <= N ; i++) {
		if (arr[i] == 0) 
			printf("%d\n", i);

	}

	return 0;
	*/


	// 골드바흐의 추측
	/*
	int n;
	int N;
	int i, j;
	int i2, j2;
	int number;
	static int arr[10001] = {0,};

	for (int i = 2; i < 10001 / i; i++)
		for (int j = i * i; j < 10001; j += i)
			if (j % i == 0)
				arr[j] = 1;

	scanf("%d", &n);

	while (n--) {

		scanf("%d", &N);

		for (i = N / 2; i > 1; i--) {
			if (arr[i] == 1) continue;
			for (j = N / 2; j <= N; j++) {
				if (arr[j] == 1) continue;

				if (i + j == N) {
					i2 = i;
					j2 = j;
					i = 0;
					j = 10002;
				}
			}
		}

		printf("%d %d\n", i2, j2);
	}*/

	// 직사각형에서 탈출

	/*int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if ((0 <= w && w <= 1000) && (0 <= h && h <= 1000)
		&& (1 <= x && x <= w - 1) && (1 <= y && y <= h - 1)) {

		x = (x > w - x) ? (w - x) : x;
		y = (y > (h - y)) ? (h - y) : y;

		printf("%d", (x > y) ? y : x);

	}*/

	// 네 번째 점
/*
	int x[4], y[4];

	scanf("%d %d", &x[0], &y[0]);
	scanf("%d %d", &x[1], &y[1]);
	scanf("%d %d", &x[2], &y[2]);

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (x[i] == x[j]) {
				x[i] = 0;
				x[j] = 0;
			}

			if (y[i] == y[j]) {
				y[i] = 0;
				y[j] = 0;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (x[i] != 0)
			x[3] = x[i];

		if (y[i] != 0)
			y[3] = y[i];
	}

	
	printf("%d %d", x[3], y[3]); */

	// 직각 삼각형	

	int Heru, Ausar, Auset;

	while (1) {
		scanf("%d %d %d", &Auset, &Ausar, &Heru);

		if (Heru == 0 && Ausar == 0 && Auset == 0)
			break;

		Heru = Heru * Heru;
		Ausar = Ausar * Ausar;
		Auset = Auset * Auset;

		if (Heru == (Ausar + Auset) || Ausar == (Heru + Auset) 
			|| Auset == (Heru + Ausar))
			printf("right\n");
		else
			printf("wrong\n");
	}

}