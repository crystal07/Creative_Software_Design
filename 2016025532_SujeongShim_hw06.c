/*2016025532 ��ǻ������ �ɼ��� homework6*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, i, j; //n�� ���� ���̸� ���� ����, �������� for���� ���� ����

	//���̸� �Է¹޴´�.
	printf("Height : ");
	scanf_s("%d",&n);

	//���� ����Ѵ�.
	for (i = n; i > 0; i--) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}