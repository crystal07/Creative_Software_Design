/*2016025532*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

	char c;

	//문자 받음
	printf("Input Alphabet : ");
	while ((c = getchar()) != EOF) {


		//파일 변환하여 출력
		if (c >= 'a' && c <= 'z') {
			printf("Result : ");
			putchar(toupper(c));
			printf("\n");
			//fflush(c);
		}//소문자인 경우
		else if (c >= 'A' && c <= 'Z') {
			printf("Result : ");
			putchar(tolower(c));
			printf("\n");
			//fflush(c);
		}
		else printf("Wrong input! try again\n");

		//다음에 변환할 문자 받음
		printf("Input Alphabet : ");
	}

	system("PAUSE");
	return 0;
}