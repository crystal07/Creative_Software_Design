/*2016025532 ��ǻ������ �ɼ��� homework3*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 2;
	int j;

	// ������ ���
	while (i < 10) {
		printf("*** %d ***\n", i); //�ܼ� ���� ���
		j = 1;
		while (j < 10) {
			printf("%d * %d = %d\n", i, j, i*j); //�ܼ��� �ش��ϴ� ������ ���
			j++;
		}
		printf("\n");
		i++;
	}

	system("PAUSE");
	return 0;
}
