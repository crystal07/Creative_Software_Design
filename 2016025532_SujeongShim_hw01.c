#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	int n;

	//�ܼ� �Է¹ޱ�
	printf("�ܼ��� �Է��Ͻÿ� :");
	scanf_s("%d", &n);

	//������ ����ϱ�
	printf("*******%d��*********");
	for (i = 0; i < 9; i++) {
		printf("%d * %d = %d\n",n,i+1,n*(i+1));
	}
	printf("********************");

	system("PAUSE");
	return 0;
}