/*2016025532 컴퓨터전공 심수정 homework14*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[100], maxi, mini, index, i;
	maxi = 0; mini = 5000;

	//배열의 최대개수를 받아온다.
	printf("Input array index : ");
	scanf_s("%d", &index);

	//배열의 개수만큼 수를 입력받는다.
	printf("Input %d numbers : ",index);
	for (i = 0; i < index; i++) scanf_s("%d", &arr[i]);

	//최대값과 최소값을 구하여 출력한다.
	for (i = 0; i < index; i++) {
		if (maxi < arr[i]) maxi = arr[i];
		if (mini > arr[i]) mini = arr[i];
	}
	printf("maximum : %d\nminumum : %d\n", maxi, mini);

	system("PAUSE");
	return 0;
}