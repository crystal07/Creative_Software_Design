/*2016025532 컴퓨터전공 심수정 homework15*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	//배열 선언 및 초기화
	int arr[] = {0, 1, 5, 4, 2, 5, 7, 8, 3, 4, 5, 1, 1, 2, 3, 6, 7, 8};
	int i, j, temp, recent;
	int size = sizeof(arr) / sizeof(arr[0]);
	recent = -1;

	//처음 배열 상태 출력
	printf("Initial numbers : ");
	for (i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n\n");

	//정렬 과정 출력
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

	//정렬된 상태의 배열 출력
	printf("Sort value :    ");
	for (i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n");

	//중복되지 않게 출력
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