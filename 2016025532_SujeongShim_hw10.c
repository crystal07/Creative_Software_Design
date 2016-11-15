/*2016025532 컴퓨터전공 심수정 homework10*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	while (1) {

		//변환할 문자 입력
		printf("Input Alphabet : ");
		c = getchar();

		//변환하여 출력
		if (c >= 97 && c <= 122) {
			printf("Result : ");
			putchar(c - 32);
			printf("\n");
			//fflush(c);
		}//소문자인 경우
		else if (c >= 65 && c <= 90) {
			printf("Result : ");
			putchar(c + 32);
			printf("\n");
			//fflush(c);
		}//대문자인 경우
		else printf("Wrong input! try again\n");//예외
	}

	system("PAUSE");
	return 0;
}