#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...)
{
	va_list ap;
	int sum = 0;
	va_start(ap, args);

	for (int i = 0; i < args; i++) {
		int num = va_arg(ap, int);
		sum += num;
	}

	va_end(ap);

	return sum;
}

int main()
{
	int num1, num2;
	int num3, num4, num5;

	scanf("%d %d", &num1, &num2);
	scanf("%d %d %d", &num3, &num4, &num5);

	printf("%d\n", sum(2, num1, num2));
	printf("%d\n", sum(3, num3, num4, num5));

	return 0;
}