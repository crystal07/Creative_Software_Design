/*2016025532 ��ǻ������ �ɼ��� homework12*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//���� ���� �� �Է� �ޱ�
	double num;
	printf("Input number : ");
	scanf_s("%lf", &num);
	
	//sqrt(), log10(), sin(), cos(), tan()�� �̿��Ͽ� ���
	printf("%f\n%f\n%f\n%f\n%f\n", sqrt(num), log10(num), sin(num), cos(num), tan(num));

	system("PAUSE");
	return 0;
}