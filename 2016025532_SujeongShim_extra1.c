/*2016025532 ��ǻ������ �ɼ��� extra homework*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int number, guess_number, chance;

	//���� ���� ������ ���� �ʱ�ȭ
	srand(time(NULL));

	//number�� ������ ������, guess_number�� �ʱ�ȭ, chance�� �ִ� ��ȸ.
	number = rand() % 100 + 1;
	guess_number = 0;
	chance = 0;

	//6���� �Ǳ� ������ ������� ������ ������ �������� �ƴ��� ���Ѵ�.
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
