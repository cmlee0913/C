#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFullName(char* family, char* given) {
	printf("%s%s", family, given);
}

int main()
{
	char familyName[31];
	char givenName[31];

	scanf("%s %s", familyName, givenName);

	printFullName(familyName, givenName);

	return 0;
}