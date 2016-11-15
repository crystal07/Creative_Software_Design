/*2016025532 컴퓨터전공 심수정 homework18*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int n);

int main() {

	long long int num;

	//어떤 수까지 곱할지 입력을 받는다.
	printf("factorial calculator\n");
	scanf("%lld", &num);

	//factorial 함수를 통해 계산하고, 결과값을 출력한다.
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