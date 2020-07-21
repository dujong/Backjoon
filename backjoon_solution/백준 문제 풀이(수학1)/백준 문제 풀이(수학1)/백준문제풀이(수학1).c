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

	int X, count=1;
	int A=1, B=1;
	scanf("%d", &X);

	if (1 <= X && X <= 10000000) {

		if (A == 1 && B == 1) {
			B++;
			count++;
		}

		if()

	}

}