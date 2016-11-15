/*2016025532 ��ǻ������ �ɼ��� homework15*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	//�迭 ���� �� �ʱ�ȭ
	int arr[] = {0, 1, 5, 4, 2, 5, 7, 8, 3, 4, 5, 1, 1, 2, 3, 6, 7, 8};
	int i, j, temp, recent;
	int size = sizeof(arr) / sizeof(arr[0]);
	recent = -1;

	//ó�� �迭 ���� ���
	printf("Initial numbers : ");
	for (i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n\n");

	//���� ���� ���
	for (i = 0; i < size; i++) {
		printf("%2d process :	", i);
		for (j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		for (j = 0; j < size; j++) printf("%d ",arr[j]);
		printf("\n");
	}
	printf("\n");

	//���ĵ� ������ �迭 ���
	printf("Sort value :    ");
	for (i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n");

	//�ߺ����� �ʰ� ���
	printf("Deduplication : ");
	for (i = 0; i < size; i++) {
		if (recent != arr[i]) {
			printf("%d ", arr[i]);
			recent = arr[i];
		}
	}

	system("PAUSE");
	return 0;
}