#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30 + 1);
	char* s2 = (char*)malloc(sizeof(char) * 30 + 1);
	char* s3 = (char*)malloc(sizeof(char) * 30 + 1);
	char* s4 = (char*)malloc(sizeof(char) * 30 + 1);

	scanf("%s %s %s %s", s1, s2, s3, s4);
	

	printf("%s\n%s\n%s\n%s", s1, s2, s3, s4);

	return 0;
}