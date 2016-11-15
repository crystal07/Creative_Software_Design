#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	//학생수를 입력받는다.
	int num, i, sum=0;
	printf("Number of students? : ");
	scanf("%d", &num);

	//학생수 만큼 배열을 할당하고, 학생들의 점수를 입력받는다.
	int* score = (int*)malloc(sizeof(int)*num);
	for (i = 0; i < num; i++) {
		printf("Score of student %d : ", i);
		scanf("%d", &score[i]);
	}

	//평균값을 구해 출력한다.
	for (i = 0; i < num; i++) sum += score[i];
	printf("Average score : %d\n",sum/num);

	//할당된 메모리를 해제한다.
	free(score);

	system("PAUSE");
	return 0;
}