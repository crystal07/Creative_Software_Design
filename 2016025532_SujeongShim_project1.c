/*2016025532 컴퓨터전공 심수정 project1*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, l,n;

	//별의 최대 개수 입력
	printf("Height : ");
	scanf_s("%d", &n);

	//다이아몬드 형태의 위쪽 형태 별 출력
	for (i = 0; i < n; i++) {
		for (j = n-1; j > i; j--) printf(" ");
		for (k = 0; k <= i; k++) printf("*");
		for (l = 0; l < i; l++) printf("*");
		printf("\n");
	}

	//다이아몬드 형태의 아래쪽 형태 별 출력
	for (i = 0; i < n-1; i++) {
		for (j = 0; j <= i; j++) printf(" ");
		for (k = n-2; k > i; k--) printf("*");
		for (l = n-1; l > i; l--) printf("*");
		printf("\n");
	}

	system("PAUSE");
	return 0;
}