/*2016025532 ��ǻ������ �ɼ��� homework8*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, num[6];

	//���� ������ �̴´�.
	srand(time(NULL));
	for (i = 0; i<6; i++) num[i] = rand() % 45 + 1;

	//�̾��� ��ȣ���� ����Ѵ�.
	printf("You can win the first prize at lotto !!\n");
	for (i = 0; i<6; i++) printf("%d ", num[i]);

	system("PAUSE");
	return 0;

}