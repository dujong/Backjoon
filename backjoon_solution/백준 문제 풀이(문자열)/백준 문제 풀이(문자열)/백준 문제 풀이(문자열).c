#include <stdio.h>

int main() {

	/*char c;			// 아스키 코드
	scanf("%c",&c);
	printf("%d",c);*/

	/*int A,sum=0;		// 숫자의 합
	scanf("%d", &A);
	char num[100] = { 0, };
	scanf("%s", num);
	for (int i = 0; i < A; i++) {
		sum += num[i] - '0';
	}
	printf("%d", sum);*/

	/*char S[101] = { NULL };		//알파벳 찾기
	int i, j;
	int cn[26] = { 0, };

	scanf("%s",S);

	for (i = 'a'; i <= 'z'; i++) {
		for (j = 0; j < 100; j++) {
			if (S[j] == i) {
				cn[i - 97] = j+1;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", cn[i]-1);
	}*/

	int A,B;
	char c[21] = { NULL };
	char P[200] = { NULL };

	scanf("%d",&A);

	for (int i = 0; i < A; i++) {
		scanf("%d",&B);
		scanf("%s",c);

		for (int j = 0; j < 21; j++) {
			for (int k = 0; k < B; k++) {
				P[j*B+k] = c[j];
			}
		}
		printf("%s\n",P);
	}

	return 0;
}