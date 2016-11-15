/*2016025532 컴퓨터전공 심수정 extra homework*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int number, guess_number, chance;

	//랜덤 변수 생성을 위한 초기화
	srand(time(NULL));

	//number은 임의의 변수로, guess_number은 초기화, chance는 최대 기회.
	number = rand() % 100 + 1;
	guess_number = 0;
	chance = 0;

	//6번이 되기 전까지 사용자의 추측을 받으며 정답인지 아닌지 비교한다.
	while (chance < 6) {
		scanf_s("%d",&guess_number);
		if (guess_number == number) {
			printf("That's Correct!\n");
			break;
		}
		if (guess_number > number) printf("Too high!\n");
		else printf("Too low!\n");
		chance++;
	}

	system("PAUSE");
	return 0;
}
