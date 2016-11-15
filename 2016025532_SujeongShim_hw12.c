/*2016025532 컴퓨터전공 심수정 homework12*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//숫자 선언 및 입력 받기
	double num;
	printf("Input number : ");
	scanf_s("%lf", &num);
	
	//sqrt(), log10(), sin(), cos(), tan()를 이용하여 출력
	printf("%f\n%f\n%f\n%f\n%f\n", sqrt(num), log10(num), sin(num), cos(num), tan(num));

	system("PAUSE");
	return 0;
}