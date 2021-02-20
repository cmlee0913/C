#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* prt1 = (char*)malloc(sizeof(char) * 60 + 1);
	scanf("%s", prt1);

	char* prt2 = strtok(prt1, ".");
	
	while (prt2 != NULL)
	{
		printf("%s\n", prt2);
		prt2 = strtok(NULL, ".");
	}

	free(prt1);
	free(prt2);

	return 0;
}