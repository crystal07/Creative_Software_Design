#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	//�л����� �Է¹޴´�.
	int num, i, sum=0;
	printf("Number of students? : ");
	scanf("%d", &num);

	//�л��� ��ŭ �迭�� �Ҵ��ϰ�, �л����� ������ �Է¹޴´�.
	int* score = (int*)malloc(sizeof(int)*num);
	for (i = 0; i < num; i++) {
		printf("Score of student %d : ", i);
		scanf("%d", &score[i]);
	}

	//��հ��� ���� ����Ѵ�.
	for (i = 0; i < num; i++) sum += score[i];
	printf("Average score : %d\n",sum/num);

	//�Ҵ�� �޸𸮸� �����Ѵ�.
	free(score);

	system("PAUSE");
	return 0;
}