/*2016025532 컴퓨터전공 심수정 homework17*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, j;
	char temp[20];
	char str[5][20] = { "abc", "1", "Hello world!", "good", "1500-1234" };

	//문자열의 길이가 작은대로 인덱스에 값 넣기
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (strlen(str[i]) > strlen(str[j])) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	//문자열 출력
	for (i = 0; i < 5; i++) {
		printf("%s\n", str[i]);
	}

	system("PAUSE");
	return 0;
}