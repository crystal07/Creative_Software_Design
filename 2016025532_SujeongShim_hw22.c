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
	//������ fp�����ͷ� ����.
	fopen_s(&fp, "data.txt", "r");


	//�빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ������ �ش�.
	while ((c = fgetc(fp)) != EOF) {
		if (isupper(c)) a[i] = tolower(c);
		else if (islower(c)) a[i]=toupper(c);
		else a[i]=c;
		i++;
	}

	//������ �ݾ��ְ�, ���� ���� �ٽ� ����.
	fclose(fp);
	fopen_s(&fp, "data.txt", "w");

	//���Ͽ� ����� ���ڿ��� �־��ش�.
	i = -1;
	while ((c = a[++i]) != '\0') fputc(c,fp);
	fclose(fp);

	return 0;
}