/*2016025532 컴퓨터전공 심수정 homework18*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrix_sum(int mat1[5][5], int mat2[5][5], int mat_result[5][5]);
void matrix_sub(int mat1[5][5], int mat2[5][5], int mat_result[5][5]);
void matrix_mul(int mat1[5][5], int mat2[5][5], int mat_result[5][5]);
void menu();
void matrix_print(int mat[5][5]);

int main() {
	int choose, i, j;
	int mat1[5][5], mat2[5][5], result[5][5];
	
	//행렬에 임의의 값들을 넣어준다.
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat1[i][j] = rand()%10;
			mat2[i][j] = rand()%10;
		}
	}

	//행렬 1, 2를 출력한다.
	printf("MATRIX_1 : \n");
	matrix_print(mat1);
	printf("MATRIX_2 : \n");
	matrix_print(mat2);

	//수행할 연산을 선택하고, 연산을 수행한다.
	choose = 0;
	while (choose != 4) {
		menu();
		scanf_s("%d", &choose);
		switch (choose) {
		case 1:
			matrix_sum(mat1, mat2, result);
			matrix_print(result);
			break;
		case 2:
			matrix_sub(mat1, mat2, result);
			matrix_print(result);
			break;
		case 3:
			matrix_mul(mat1, mat2, result);
			matrix_print(result);
			break;
		default :
			printf("Wrong Input!");
			break;
		}

	}

	system("PAUSE");
	return 0;
}

void menu() {
	printf("*****************************\n");
	printf("Select the operation\n");
	printf("1. Addition\n");
	printf("2. Substration\n");
	printf("3. Multiplication\n");
	printf("4. EXIT\n");
	printf("*****************************\n");
}

void matrix_sum(int mat1[5][5], int mat2[5][5], int mat_result[5][5]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat_result[i][j]=mat1[i][j] + mat2[i][j];
		}
	}
}

void matrix_sub(int mat1[5][5], int mat2[5][5], int mat_result[5][5]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat_result[i][j] = mat1[i][j] - mat2[i][j];
		}
	}
}

void matrix_mul(int mat1[5][5], int mat2[5][5], int mat_result[5][5]) {
	int i, j, k;
	//행렬 초기화
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat_result[i][j] = 0;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			for (k = 0; k < 5; k++) {
				mat_result[i][j] += mat1[i][k]*mat2[k][j];
			}
		}
	}
}

void matrix_print(int mat[5][5]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}