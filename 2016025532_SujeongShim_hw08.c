/*2016025532 컴퓨터전공 심수정 homework8*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, num[6];

	//랜덤 변수를 뽑는다.
	srand(time(NULL));
	for (i = 0; i<6; i++) num[i] = rand() % 45 + 1;

	//뽑아진 번호들을 출력한다.
	printf("You can win the first prize at lotto !!\n");
	for (i = 0; i<6; i++) printf("%d ", num[i]);

	system("PAUSE");
	return 0;

}