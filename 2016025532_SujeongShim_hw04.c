/*2016025532 컴퓨터전공 심수정 homework4*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,k;
	int j = 0;
	
	//제곱할 수를 받고, 그 수가 i, k의 값이 되도록 한다.
	printf("Input number :");
	scanf_s("%d",&i);
	k = i;

	//i는 제곱한 결과값이 되도록 i의 값에 계속 처음의 수를 곱해준다.
	while (j < 10) {
		printf("%5d",i);
		i *= k;
		j++;
	}

	system("PAUSE");
	return 0;
}