/*2016025532 ��ǻ������ �ɼ��� homework9*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	while (1) {
		
		//��ȯ�� ���� �Է�
		printf("Input Alphabet : ");
		scanf_s("%c", &c);

		//���� ��ȯ�� ���
		if (c >= 65 && c <= 90) {
			printf("Result : %c\n", c + 32);
			//fflush(c);
		}//�빮���� ���

		else if (c >= 97 && c <= 122) {
			printf("Result : %c\n", c - 32);
			//fflush(c);
		}//�ҹ����� ���
		else printf("Wrong input! try again\n"); //����ó��
	}

	system("PAUSE");
	return 0;
}