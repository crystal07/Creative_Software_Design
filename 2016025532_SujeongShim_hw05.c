/*2016025532 ��ǻ������ �ɼ��� homework 5*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, i, j; //n�� ���� ���� ����, i,j�� for���� ���� ����

	printf("Height : ");
	scanf_s("%d",&n); //���� ���̸� �Է�

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		} //���� ������ŭ ����ش�.
		printf("\n"); //�� �ٲ�
	}

	system("PAUSE");
	return 0;
}