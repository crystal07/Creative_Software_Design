/*2016025532 ��ǻ������ �ɼ��� project1*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, l,n;

	//���� �ִ� ���� �Է�
	printf("Height : ");
	scanf_s("%d", &n);

	//���̾Ƹ�� ������ ���� ���� �� ���
	for (i = 0; i < n; i++) {
		for (j = n-1; j > i; j--) printf(" ");
		for (k = 0; k <= i; k++) printf("*");
		for (l = 0; l < i; l++) printf("*");
		printf("\n");
	}

	//���̾Ƹ�� ������ �Ʒ��� ���� �� ���
	for (i = 0; i < n-1; i++) {
		for (j = 0; j <= i; j++) printf(" ");
		for (k = n-2; k > i; k--) printf("*");
		for (l = n-1; l > i; l--) printf("*");
		printf("\n");
	}

	system("PAUSE");
	return 0;
}