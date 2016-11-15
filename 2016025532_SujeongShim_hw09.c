/*2016025532 컴퓨터전공 심수정 homework9*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	while (1) {
		
		//변환할 문자 입력
		printf("Input Alphabet : ");
		scanf_s("%c", &c);

		//문자 변환해 출력
		if (c >= 65 && c <= 90) {
			printf("Result : %c\n", c + 32);
			//fflush(c);
		}//대문자인 경우

		else if (c >= 97 && c <= 122) {
			printf("Result : %c\n", c - 32);
			//fflush(c);
		}//소문자인 경우
		else printf("Wrong input! try again\n"); //예외처리
	}

	system("PAUSE");
	return 0;
}