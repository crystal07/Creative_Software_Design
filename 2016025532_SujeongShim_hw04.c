/*2016025532 ��ǻ������ �ɼ��� homework4*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,k;
	int j = 0;
	
	//������ ���� �ް�, �� ���� i, k�� ���� �ǵ��� �Ѵ�.
	printf("Input number :");
	scanf_s("%d",&i);
	k = i;

	//i�� ������ ������� �ǵ��� i�� ���� ��� ó���� ���� �����ش�.
	while (j < 10) {
		printf("%5d",i);
		i *= k;
		j++;
	}

	system("PAUSE");
	return 0;
}