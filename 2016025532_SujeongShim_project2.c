/*2016025532 컴퓨터전공 심수정 project2*/
#include <stdio.h>

int Fibonacci(int n);
void ShowMenu();

int main() {
	int choose, n, i, fibo[100];
	choose = 0;

	//4를 입력할 때까지 계속 프로그램 실행
	while (choose != 4) {

		//메뉴를 보여주고 어떤 명령을 수행할지 입력
		ShowMenu();
		printf("Input : ");
		scanf_s("%d", &choose);

		//명령 수행
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