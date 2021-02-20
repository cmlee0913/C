#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 1000 + 1);

	scanf("%[^\n]s", s1);

	char* s2 = strchr(s1, ' ');
	int a = 0;

	while (s2 != NULL)
	{
		s2 = strchr(s2 + 1, ' ');
		a++;
	}

	printf("%d", a);
	
	return 0;
}