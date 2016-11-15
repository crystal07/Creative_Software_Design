/*2016025532 ��ǻ������ �ɼ��� homework19*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void Choice();
char *Reverse(char *string);
char *Changed(char *string);

int main() {

	int choose=-1;
	char *string = "Hanyang University is a private research university in South Korea. The main campus is in Seoul.";

	while (choose != 4) {
		//�������� �˷��ְ� �����Ѵ�.
		Choice();
		scanf("%d", &choose);

		//�������� ���� ����� �����Ѵ�.
		switch (choose) {
		case 1: //origin
			printf("%s\n", string);
			break;
		case 2: //reverse
			printf("%s\n", Reverse(string));
			break;
		case 3: //changed
			printf("%s\n", Changed(string));
			break;
		default :
			break;
		}
	}

	return 0;
}

//�������� �����ִ� �Լ�
void Choice() {
	printf("************************************\n");
	printf("1. Print original string\n");
	printf("2. Print reverse string\n");
	printf("3. Print changed string\n");
	printf("4. EXIT\n");
	printf("************************************\n");
}

//���ڿ��� �Ųٷ� ������ �Լ�
char *Reverse(char *string) {
	int i;
	char result[10000] = "asdf";
	for (i = 0; string[i] != '\0'; i++) {
		result[i] = string[strlen(string)-i-1];
	}
	return result;
}

//���ڿ��� �ٲ��ִ� �Լ�
char *Changed(char *string) {
	int i;
	char result[10000];
	for (i = 0; string[i] != '\0'; i++) {
		if (islower(string[i])) result[i] = toupper(string[i]);
		else if (isupper(string[i])) result[i] = tolower(string[i]);
		else result[i] = string[i];
	}
	result[i] = '\0';
	return result;
}