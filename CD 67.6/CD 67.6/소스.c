#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int num1) {

	static int fiboNum1 = 0;
	static int fiboNum2 = 1;
	static int result;

	result = fiboNum1 + fiboNum2;
	fiboNum1 = fiboNum2;
	fiboNum2 = result;

	if (num1 == 2) {
		return result;
	}

	fib(--num1);
}


int main()
{
	int num1;

	scanf("%d", &num1);

	printf("%d\n", fib(num1));

}