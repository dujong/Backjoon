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

	/*int A,B;	// 문자열 반복
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
	}*/

	/*char C[1000000];		//단어 공부
	int A[26] = { 0, };
	int max = 0;
	int cnt;

	scanf("%s", C);

	for (int i = 0; C[i] != NULL; i++) {

		if (!(C[i] >= 'a' && C[i] <= 'z'))
			C[i] = tolower(C[i]);
		cnt = (C[i] - 97) % 26;
		A[cnt] ++;
	}
	 
	for (int i = 1; i < 26; i++) {
		if (A[i] > A[max])
			max = i;
	}

	for (int i = 0; i < 26; i++) {
		if (max != i && A[i] == A[max])
		{
			printf("?");
			return 0;
		}
	}

	printf("%c", toupper(max + 97));*/


	/*char arr[1000000];	//단어의 개수
	int count = 0;

	gets(arr);

	char *word = strtok(arr," ");
	while (word != NULL) {
		count++;
		word = strtok(NULL," ");
	}

	printf("%d", count);*/


	/*int num1, num2;		//상수
	scanf("%d %d", &num1, &num2);

	num1 = (num1 % 10 * 100) + ((num1%100) / 10 * 10) + (num1 / 100);
	num2 = (num2 % 10 * 100) + ((num2%100) / 10 * 10) + (num2 / 100);

	printf("%d", (num1 > num2) ? num1 : num2);*/

	/*char word[15];		// 다이얼
	int times[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10,10,10,10 };
	int result = 0;
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		result += times[word[i] - 'A'];

	}
	printf("%d", result);*/

	/*char word[100];		// 크로아티아 알파벳
	scanf("%s", word);


	int result = strlen(word);

	for (int i = 0; i< strlen(word); i++) {

		if ((word[i] == 'l' || word[i] == 'n') && word[i + 1] == 'j')
			result--;

		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
			result--;

		else if (word[i] == '=' || word[i] == '-')
			result--;

	}

	printf("%d", result);*/	

	/*int count,result=0; // 그룹 단어 체크
	char word[100];
	char arr[26] = {'\0',};
	scanf("%d",&count);
	
	if (1 <= count && count <= 100) {

		for (int i = 0; i < count; i++) {
			int indexarea = 0;
			scanf("%s", word);

			for (int j = 0; j < 100; j++) {

				arr[indexarea] = word[j];

				if (word[j] != word[j + 1]) {
					indexarea++;
				}

			}

			for (int head = 0; head < strlen(arr); head++) {

				if (head == strlen(arr) - 1)
					result += 1;

				for (int tail = head + 1; tail < strlen(arr); tail++) {
					if (arr[head] == arr[tail]) {
						head = strlen(arr);
						break;
					}
				}
			}

		}
	}

	printf("%d", result);*/

}