#include <stdio.h>

int main()
{
	int first, second;

	while (1)
	{
		scanf_s("%d", &first);
		scanf_s("%d", &second);

		if (first > 1000 || first < 1 || second > 1000 || second < 10 || second < first)
		{
			printf("범위 값을 잘못 입력하였습니다.\n");
		}
		else
		{
			for (int i = first; i <= second; i++)
			{
				if (i % 5 == 0 && i % 11 == 0)
				{
					printf("FizzBuzz\n");
				}
				else if (i % 5 == 0)
				{
					printf("Fizz\n");
				}
				else if (i % 11 == 0)
				{
					printf("Buzz\n");
				}
				else
				{
					printf("%d\n", i);
				}
			}
			break;
		}
	}
}