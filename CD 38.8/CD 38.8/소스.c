#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int vertical = NULL;	
	int horizontal = NULL;

	printf("가로의 크기를 입력하세요 : ");
	scanf("%d", &horizontal);

	printf("세로의 크기를 입력하세요 : ");
	scanf("%d", &vertical);

	char** matrix = malloc(sizeof(char*) * vertical);

	for (int i = 0; i < vertical; i++)
	{
		matrix[i] = malloc(sizeof(char) * (horizontal + 1));
	}

	for (int i = 0; i < vertical; i++) 
	{
		scanf("%s", matrix[i]);
	}

	for (int a = 0; a < vertical; a++)
	{
		for (int b = 0; b < horizontal; b++)
		{
			if (matrix[a][b] == '.')
			{

				matrix[a][b] = '0';
			}
		}
	}

	for (int i = 0; i < vertical; i++)
	{ 
		for (int j = 0; j < horizontal; j++)
		{ 
			if (matrix[i][j] == '*')
			{
				for (int m = i - 1; m < i + 2; m++) 
				{
					for (int n = j - 1; n < j + 2; n++) 
					{
						if (m >= 0 && m < vertical && n >= 0 && n < horizontal && matrix[m][n] >= '0')
						{
							matrix[m][n] += 1;
						}
					}
				}
			}
		}
	}


	for (int a = 0; a < vertical; a++)
	{
		printf("%s\n", matrix[a]);
	}

	for (int a = 0; a < horizontal; a++)
	{
		free(matrix[a]);
	}
	free(matrix);

	return 0;
}