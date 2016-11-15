/*2016025532 ��ǻ������ �ɼ��� project2*/
#include <stdio.h>

int Fibonacci(int n);
void ShowMenu();

int main() {
	int choose, n, i, fibo[100];
	choose = 0;

	//4�� �Է��� ������ ��� ���α׷� ����
	while (choose != 4) {

		//�޴��� �����ְ� � ����� �������� �Է�
		ShowMenu();
		printf("Input : ");
		scanf_s("%d", &choose);

		//��� ����
		switch(choose) {
		case 1 :
			printf("Input the number : ");
			scanf_s("%d", &n);
			for (i = 0; i < n; i++) fibo[i] = Fibonacci(i);
			break;
		case 2 :
			for (i = 0; i < n; i++) printf("%d ", fibo[i]);
			printf("\n");
			break;
		case 3 :
			for (i = 0; i < n; i++) fibo[i] = 0;
			break;
		default :
			break;
		}
	}
}

int Fibonacci(int n) {
	if (n > 1) return Fibonacci(n - 1) + Fibonacci(n - 2);
	else if (n==1) return 1;
	else return 0;
}

void ShowMenu() {
	printf("**************************************\n");
	printf("1. Calculate\n");
	printf("2. Show it!\n");
	printf("3. Initialize\n");
	printf("4. Quit\n");
	printf("**************************************\n");
}