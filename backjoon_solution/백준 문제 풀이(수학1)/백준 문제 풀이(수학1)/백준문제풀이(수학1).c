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

	int up, down, height;
	int temp;
	int day = 1;
	scanf("%d %d %d", &up, &down, &height);

	temp = (height - up) / (up - down);

	if ((height - up) % (up - down) == 0)
		printf("%d", day+temp);


	else
		printf("%d", day+temp+1);

}