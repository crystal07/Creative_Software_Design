/*2016025532 ��ǻ������ �ɼ��� extra homework*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10], i;
	int max = 0;
	int min = 5000;

	//�������� ���� �����Ѵ�.
	srand(time(NULL));
	for (i = 0; i<10; i++) num[i] = rand() % 1000 + 1;

	//�������� ����� ���� ����Ѵ�.
	for (i = 0; i<10; i++) printf("%d ", num[i]);

	//�ּҰ�, �ִ밪�� ���� ����Ѵ�.
	for (i = 0; i < 10; i++) if (max < num[i]) max = num[i];
	for (i = 0; i < 10; i++) if (min > num[i]) min = num[i];
	printf("\nMaximum number is %d", max);
	printf("\nMinimum number is %d", min);

	system("PAUSE");
	return 0;
}