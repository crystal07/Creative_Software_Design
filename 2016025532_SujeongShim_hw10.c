/*2016025532 ��ǻ������ �ɼ��� homework10*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	while (1) {

		//��ȯ�� ���� �Է�
		printf("Input Alphabet : ");
		c = getchar();

		//��ȯ�Ͽ� ���
		if (c >= 97 && c <= 122) {
			printf("Result : ");
			putchar(c - 32);
			printf("\n");
			//fflush(c);
		}//�ҹ����� ���
		else if (c >= 65 && c <= 90) {
			printf("Result : ");
			putchar(c + 32);
			printf("\n");
			//fflush(c);
		}//�빮���� ���
		else printf("Wrong input! try again\n");//����
	}

	system("PAUSE");
	return 0;
}