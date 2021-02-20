#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char* str = (char*)malloc(sizeof(char) * 30 + 1);
	int len;
	bool isOk = true;

	scanf("%[^\n]s", str);
	len = strlen(str);


	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		while (str[j] == ' ')
		{
			j--;
		}

		if (i > j || str[i] != str[j])
		{
			isOk = false;
			break;
		}
	}

	printf("%d", isOk);

	free(str);

	return 0;
}