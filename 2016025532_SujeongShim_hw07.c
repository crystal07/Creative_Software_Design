/*2016025532 컴퓨터전공 심수정 homework7*/
#include <stdio.h>
#include <stdlib.h>

//수를 입력 받는 함수
int Input() {
	int num;
	scanf_s("%d", &num);
	return num;
}

//받은 두 수를 더해주는 함수
int Add(int num1, int num2) {
	return num1 + num2;
}


int main() {
	int num1, num2, sum;

	//더할 두 수를 입력받는다.
	printf("Input two numbers : ");
	num1 = Input();
	num2 = Input();

	//두 수를 더한다.
	sum=Add(num1, num2);
	printf("Results : %d\n",sum);

	system("PAUSE");
	return 0;
}