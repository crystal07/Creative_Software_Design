/*2016025532 ��ǻ������ �ɼ��� homework18*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int n);

int main() {

	long long int num;

	//� ������ ������ �Է��� �޴´�.
	printf("factorial calculator\n");
	scanf("%lld", &num);

	//factorial �Լ��� ���� ����ϰ�, ������� ����Ѵ�.
	printf("result : %lld\n", factorial(num));

	system("PAUSE");
	return 0;
}

long long int factorial(long long int n) {
	long long int result=n;
	if (n > 0) {
		result *= factorial(n - 1);
		return result;
	}
	else return 1;
}