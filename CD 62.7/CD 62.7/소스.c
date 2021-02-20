#include <stdio.h>

void setAttackSpeed(float a) {
	printf("Attack Speed: %f\n", a);
}

int main()
{
	setAttackSpeed(0.638f);
	setAttackSpeed(1.23f);

	return 0;
}