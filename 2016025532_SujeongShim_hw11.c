/*2016025532*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

	char c;

	//���� ����
	printf("Input Alphabet : ");
	while ((c = getchar()) != EOF) {


		//���� ��ȯ�Ͽ� ���
		if (c >= 'a' && c <= 'z') {
			printf("Result : ");
			putchar(toupper(c));
			printf("\n");
			//fflush(c);
		}//�ҹ����� ���
		else if (c >= 'A' && c <= 'Z') {
			printf("Result : ");
			putchar(tolower(c));
			printf("\n");
			//fflush(c);
		}
		else printf("Wrong input! try again\n");

		//������ ��ȯ�� ���� ����
		printf("Input Alphabet : ");
	}

	system("PAUSE");
	return 0;
}