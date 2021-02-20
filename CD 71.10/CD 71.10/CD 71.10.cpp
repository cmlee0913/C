#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {

	int size;
	FILE* fp = fopen("words.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	char* buffer = (char*)malloc(size+1);
	memset(buffer, 0, size + 1);

	fseek(fp, 7, SEEK_SET);
	fread(buffer, 4, 1, fp);
	printf("%s", buffer);

	memset(buffer, 0, size + 1); // 무조건 한번씩 비워줘야함

	fseek(fp, -6, SEEK_END);
	fread(buffer, 2, 1, fp);
	printf("%s", buffer);

	fclose(fp);

	return 0;
}