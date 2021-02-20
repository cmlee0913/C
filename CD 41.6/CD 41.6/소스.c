#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30 + 1);

	scanf("%[^\n]s", s1);

	printf("%d", strlen(s1));

	return 0;
}