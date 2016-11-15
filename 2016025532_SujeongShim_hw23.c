#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int *num, count=1, n=0, i;
	num = (int*)malloc(sizeof(int));

	while (1) {
		//숫자를 받고 값을 할당
		printf("Numbers? ");
		scanf("%d", &n);

		if (n != -1) {
			num[count-1] = n;
			//배열의 메모리 다시 할당
			num = (int *)realloc(num, (++count) * sizeof(int));
		}
		else break;
	}

	//저장된 값들 출력
	for (i = 0; i < count-1; i++) printf("%d ", num[i]);

	system("PAUSE");
	return 0;
}