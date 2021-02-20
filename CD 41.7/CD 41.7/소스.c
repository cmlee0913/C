#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30 + 1);
	char* s2 = (char*)malloc(sizeof(char) * 30 + 1);

	scanf("%s %s", s1, s2);

	printf("%d", strcmp(s1, s2));

	return 0;
}