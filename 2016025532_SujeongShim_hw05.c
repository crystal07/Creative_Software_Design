/*2016025532 컴퓨터전공 심수정 homework 5*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, i, j; //n은 최종 별의 개수, i,j는 for문을 위한 변수

	printf("Height : ");
	scanf_s("%d",&n); //별의 높이를 입력

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		} //별을 개수만큼 찍어준다.
		printf("\n"); //줄 바꿈
	}

	system("PAUSE");
	return 0;
}