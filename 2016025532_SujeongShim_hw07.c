/*2016025532 ��ǻ������ �ɼ��� homework7*/
#include <stdio.h>
#include <stdlib.h>

//���� �Է� �޴� �Լ�
int Input() {
	int num;
	scanf_s("%d", &num);
	return num;
}

//���� �� ���� �����ִ� �Լ�
int Add(int num1, int num2) {
	return num1 + num2;
}


int main() {
	int num1, num2, sum;

	//���� �� ���� �Է¹޴´�.
	printf("Input two numbers : ");
	num1 = Input();
	num2 = Input();

	//�� ���� ���Ѵ�.
	sum=Add(num1, num2);
	printf("Results : %d\n",sum);

	system("PAUSE");
	return 0;
}