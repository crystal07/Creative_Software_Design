#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int *num, count=1, n=0, i;
	num = (int*)malloc(sizeof(int));

	while (1) {
		//���ڸ� �ް� ���� �Ҵ�
		printf("Numbers? ");
		scanf("%d", &n);

		if (n != -1) {
			num[count-1] = n;
			//�迭�� �޸� �ٽ� �Ҵ�
			num = (int *)realloc(num, (++count) * sizeof(int));
		}
		else break;
	}

	//����� ���� ���
	for (i = 0; i < count-1; i++) printf("%d ", num[i]);

	system("PAUSE");
	return 0;
}