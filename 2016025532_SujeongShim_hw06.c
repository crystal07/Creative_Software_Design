/*2016025532 컴퓨터전공 심수정 homework6*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, i, j; //n은 별의 높이를 위한 변수, 나머지는 for문을 위한 변수

	//높이를 입력받는다.
	printf("Height : ");
	scanf_s("%d",&n);

	//별을 출력한다.
	for (i = n; i > 0; i--) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}