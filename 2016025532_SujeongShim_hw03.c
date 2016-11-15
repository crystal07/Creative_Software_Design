/*2016025532 컴퓨터전공 심수정 homework3*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 2;
	int j;

	// 구구단 출력
	while (i < 10) {
		printf("*** %d ***\n", i); //단수 정보 출력
		j = 1;
		while (j < 10) {
			printf("%d * %d = %d\n", i, j, i*j); //단수에 해당하는 구구단 출력
			j++;
		}
		printf("\n");
		i++;
	}

	system("PAUSE");
	return 0;
}
