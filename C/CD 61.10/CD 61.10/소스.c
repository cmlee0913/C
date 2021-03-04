#include <stdio.h>
#include <stdbool.h>

float getArmor() {
	return 20.500000;
}

bool hasSlowSkill() {
	return false;
}

int main()
{
	float armor;
	bool slow;

	armor = getArmor();
	slow = hasSlowSkill();

	printf("%f\n", armor);
	printf("%s\n", slow == true ? "true" : "false");

	return 0;
}