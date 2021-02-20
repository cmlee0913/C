#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* str = (char*)malloc(sizeof(char) * 10 + 1);
	int num;

	scanf("%d %s", &num, str);

	int len = strlen(str);

	if (len < num)
	{
		printf("wrong\n");
		return 0;
	}
	else
	{
		for (int i = 0; i < len - (num - 1); i++)
		{
			for (int j = 0; j < num; j++)
			{
				printf("%c", str[i + j]);
			}
			printf("\n");
		}
	}

	free(str);

	return 0;
}