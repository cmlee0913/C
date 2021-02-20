#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getName()
{
	char* a = (char*)malloc(sizeof(char) * 7 + 1);
	strcpy(a, "Neptune");

	return a;
}


int main()
{
	char* name;

	name = getName();

	printf("%s\n", name);

	free(name);

	return 0;
}