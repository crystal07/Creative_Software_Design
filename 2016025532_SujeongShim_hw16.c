/*2016025532 컴퓨터전공 심수정 homework16*/
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int check, equal, i, j, size_str1, size_str2;
	char str1[100], str2[100];

	//input the number and string
	printf("Input the number to check : ");
	scanf("%d", &check);
	printf("Input the string1 : ");
	scanf("%s", str1);
	printf("Input the string2 : ");
	scanf("%s", str2);
	
	//compare string1 and string2
	i = 0;
	equal = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] == str2[i]) equal++;
		i++;
	}

	//compare size of string1 and string2
	size_str1 = 0; size_str2 = 0;
	while (str1[size_str1]!='\0') size_str1++;
	while (str2[size_str2]!='\0') size_str2++;

	//print result
	if (equal < check && size_str1 == size_str2 && i==equal) printf("equal\n");
	else if (equal >= check) printf("equal %d character\n", equal);
	else printf("not equal\n");

	system("PAUSE");
	return 0;
}