/*2016025532 컴퓨터전공 심수정 extra homework*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10], i;
	int max = 0;
	int min = 5000;

	//랜덤으로 수를 저장한다.
	srand(time(NULL));
	for (i = 0; i<10; i++) num[i] = rand() % 1000 + 1;

	//랜덤으로 저장된 수를 출력한다.
	for (i = 0; i<10; i++) printf("%d ", num[i]);

	//최소값, 최대값을 구해 출력한다.
	for (i = 0; i < 10; i++) if (max < num[i]) max = num[i];
	for (i = 0; i < 10; i++) if (min > num[i]) min = num[i];
	printf("\nMaximum number is %d", max);
	printf("\nMinimum number is %d", min);

	system("PAUSE");
	return 0;
}