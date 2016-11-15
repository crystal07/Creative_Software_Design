/*2016025532 컴퓨터전공 심수정 homework19*/
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
		//선택지를 알려주고 선택한다.
		Choice();
		scanf("%d", &choose);

		//선택지에 따른 명령을 수행한다.
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

//선택지를 보여주는 함수
void Choice() {
	printf("************************************\n");
	printf("1. Print original string\n");
	printf("2. Print reverse string\n");
	printf("3. Print changed string\n");
	printf("4. EXIT\n");
	printf("************************************\n");
}

//문자열을 거꾸로 뒤집는 함수
char *Reverse(char *string) {
	int i;
	char result[10000] = "asdf";
	for (i = 0; string[i] != '\0'; i++) {
		result[i] = string[strlen(string)-i-1];
	}
	return result;
}

//문자열을 바꿔주는 함수
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