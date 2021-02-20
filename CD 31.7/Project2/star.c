#include <stdio.h>

int main()
{
	int weight;

	scanf_s("%d", &weight);

	for (int y = weight; 0 < y; y--)
	{
		for (int x = 1; x <= weight; x++)
		{
			if (x < y)
			{
				printf(" ");
			}
			else if (x >= y)
			{
				printf("*");
			}
		}

		for (int x2 = weight - 1; x2 >= 1; x2--)
		{
			if (x2 <= y - 1)
			{
				printf(" ");
			}
			else if (x2 > y - 1)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}