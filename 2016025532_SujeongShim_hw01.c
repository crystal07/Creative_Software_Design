#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	int n;

	//단수 입력받기
	printf("단수를 입력하시오 :");
	scanf_s("%d", &n);

	//구구단 출력하기
	printf("*******%d단*********");
	for (i = 0; i < 9; i++) {
		printf("%d * %d = %d\n",n,i+1,n*(i+1));
	}
	printf("********************");

	system("PAUSE");
	return 0;
}