/*2016025532 ��ǻ������ �ɼ��� homework17*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, j;
	char temp[20];
	char str[5][20] = { "abc", "1", "Hello world!", "good", "1500-1234" };

	//���ڿ��� ���̰� ������� �ε����� �� �ֱ�
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (strlen(str[i]) > strlen(str[j])) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	//���ڿ� ���
	for (i = 0; i < 5; i++) {
		printf("%s\n", str[i]);
	}

	system("PAUSE");
	return 0;
}