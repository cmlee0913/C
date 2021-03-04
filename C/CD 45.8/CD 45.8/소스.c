#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* str1 = (char*)malloc(sizeof(char) * 1000 + 1);
	scanf("%[^\n]s", str1);

	char* str2 = strtok(str1, " .,");
	int i = 0;

	while (str2 != NULL)
	{
		if (str2 != NULL && strcmp(str2, "the") == 0)
		{
			i++;
		}
		str2 = strtok(NULL, " .,");
	}

	printf("%d", i);

	free(str1);
	free(str2);

	return 0;
}