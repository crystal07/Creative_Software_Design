#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	FILE *fp;
	//FILE *f;
	char c;
	char a[10000] = { '\0' };
	int i = 0;
	//파일을 fp포인터로 연다.
	fopen_s(&fp, "data.txt", "r");


	//대문자는 소문자로, 소문자는 대문자로 변경해 준다.
	while ((c = fgetc(fp)) != EOF) {
		if (isupper(c)) a[i] = tolower(c);
		else if (islower(c)) a[i]=toupper(c);
		else a[i]=c;
		i++;
	}

	//파일을 닫아주고, 쓰기 모드로 다시 연다.
	fclose(fp);
	fopen_s(&fp, "data.txt", "w");

	//파일에 변경된 문자열을 넣어준다.
	i = -1;
	while ((c = a[++i]) != '\0') fputc(c,fp);
	fclose(fp);

	return 0;
}