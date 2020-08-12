#include <stdio.h>

int main() {
	//손익 분기점

	/*int fixed_cost, variable_cost, notebook_price;
	scanf("%d %d %d", &fixed_cost, &variable_cost, &notebook_price);


	if (variable_cost >= notebook_price)
		printf("-1");


	else
		printf("%d", fixed_cost / (notebook_price - variable_cost) + 1);


		return 0;*/

		// 설탕 배달

		/*int sugar;
		int box=0;

		scanf("%d", &sugar);

		if ( 3 <= sugar && sugar <= 5000) {

			while (1) {

				if (sugar % 5 == 0) {
					box += sugar / 5;
					printf("%d", box);
					return 0;
				}

				sugar = sugar - 3;
				box++;

				if (sugar < 0) {
					printf("-1");
					return 0;
				}

			}
		}*/

		// 설탕

		/* int number;
		scanf("%d", &number);

		if (1 <= number && number <= 1000000000) {

			number--;

			if (number == 0)
				printf("1");

			else {
				int room = 1, up = 1;

				while (1) {
					if (6 * up >= number) {
						room++;
						printf("%d", room);
						break;
					}

					else {
						room++;
						up = up + room;

					}
				}

			}

		}*/

		// 분수찾기

		/*int X, key, count = 2;
		int i = 2, j = 1, k = 2;


		scanf("%d",&X);

		if (1 <= X && X <= 10000000) {

			if (X == 1) {
				printf("1/1");
				return 0;
			}

			while (1) {
				if (i <= X && i + j >= X) {
					if (j % 2 == 1) key = 0;
					else key = 1;
					break;
				}

				i = i + j + 1;
				j++;
			}

			i = 2; j = 0; k = 0;

			while (1) {
				j = 1;
				for (k = i; k > 0; k--) {


					if (X == count) {
						printf("%d/%d", (key ==1) ? k:j, (key == 1) ? j:k  );
						return 0;

					}

					j++;
					count++;
				}

				i++;
			}


		}*/

		// 달팽이는 올라가고 싶다

		/*int up, down, height;
		int temp;
		int day = 1;
		scanf("%d %d %d", &up, &down, &height);

		temp = (height - up) / (up - down);

		if ((height - up) % (up - down) == 0)
			printf("%d", day+temp);


		else
			printf("%d", day+temp+1);*/

	// ACM 호텔

	/*int T;
	int H, W, N;
	int result = 1;
	scanf("%d", &T);



		for (int i = 0; i < T; i++) {
			scanf("%d %d %d", &H, &W, &N);

			if (N % H == 0)
				printf("%d\n",H*100 + (N/H));
			else
				printf("%d\n", (N%H)*100 + (N/H)+1 );
		}*/
	
	// 부녀회장이 될테야

	/*int apartment[15][15] = { 0, };
	int floor,room,number;
	for (int i = 0; i < 15; i++)
		apartment[0][i] = i;
	

	for (int i = 1; i < 15; i++) 
		for (int j = 1; j < 15; j++) 
				apartment[i][j] = apartment[i - 1][j] + apartment[i][j-1];
			
	
	scanf("%d", &number);

	for (int q = 0; q < number; q++) {
		scanf("%d %d", &floor,&room);
		printf("%d\n",apartment[floor][room]);
	}*/

	// fly me to the alpha centauri

/*void Ptr(int a)
{
	long i, j, cnt;

	i = j = 2;
	cnt = 0;

	if (a == 1 || a == 2)
	{
		printf("%d\n", (a == 1) ? 1 : 2);
		return 0;
	}

	while (1)
	{
		if (cnt == 2)
		{
			i++;
			cnt = 0;
		}
		j += i;
		cnt++;
		if (j >= a)
			break;
	}
	printf("%ld\n", (cnt == 1) ? i * 2 - 1 : i * 2);
}



int main(void)
{
	int t, x, y, i;

	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &x, &y);
		Ptr(y - x);
	}
	return 0;
}*/

	


}