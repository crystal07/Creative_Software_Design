/*2016025532 ��ǻ������ �ɼ��� homework14*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[100], maxi, mini, index, i;
	maxi = 0; mini = 5000;

	//�迭�� �ִ밳���� �޾ƿ´�.
	printf("Input array index : ");
	scanf_s("%d", &index);

	//�迭�� ������ŭ ���� �Է¹޴´�.
	printf("Input %d numbers : ",index);
	for (i = 0; i < index; i++) scanf_s("%d", &arr[i]);

	//�ִ밪�� �ּҰ��� ���Ͽ� ����Ѵ�.
	for (i = 0; i < index; i++) {
		if (maxi < arr[i]) maxi = arr[i];
		if (mini > arr[i]) mini = arr[i];
	}
	printf("maximum : %d\nminumum : %d\n", maxi, mini);

	system("PAUSE");
	return 0;
}