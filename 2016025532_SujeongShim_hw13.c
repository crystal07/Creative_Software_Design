#include <stdio.h>
#include <stdlib.h>

void add(double *, double *);
void sub(double *, double *);
void mul(double *, double *);
void di(double *, double *, double *, double *);

int main() {

	int count, i;
	double num[100];
	char op;
	count = -1;

	while (count != 0) {

		//숫자들을 받아온다.
		printf("Numbers : ");
		for (i = 0; i < 4; i++) scanf_s("%lf", &num[i]);
		
		//연산자를 받고, 그에 맞는 계산을 한다.
		printf("Operator : ");
		scanf_s(" %c", &op);
		switch (op) {
		case '+' :
			for (i = 1; i < 4; i++) add(&num[0], &num[i]);
			break;
		case '-' :
			for (i = 1; i < 4; i++) sub(&num[0], &num[i]);
			break;
		case '*' :
			for (i = 1; i < 4; i++) mul(&num[0], &num[i]);
			break;
		case '/' :
			di(&num[0], &num[1], &num[2], &num[3]);
			break;
		default :
			break;
		}

		//결과값을 출력한다.
		printf("Result : %lf\n", num[0]);
	}

	system("PAUSE");
	return 0;
}

void add(double *num1, double *num2) {
	*num1 += *num2;
}

void sub(double *num1, double *num2) {
	*num1 -= *num2;
}

void mul(double *num1, double *num2) {
	*num1 *= *num2;
}

void di(double *num1, double *num2, double *num3, double *num4) {
	*num1 /= *num2 / *num3 / *num4;
}
