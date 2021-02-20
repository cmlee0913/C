#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	scanf_s("%d", &number);

	int** pointer = malloc(sizeof(int*) * number);


	for (int i = 0; i < number; i++)
	{
		pointer[i] = malloc(sizeof(int) * number);

		for (int j = 0; j < number; j++)
		{
			if (i == j)
			{
				pointer[i][j] = 1;
			}
			else
			{
				pointer[i][j] = 0;
			}
			
			printf("%d ", pointer[i][j]);
		}

		printf("\n");
	}

	return 0;
}