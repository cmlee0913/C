#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {

	FILE* fp;
	int size;
	char* buffer;

	fp = fopen("words.txt", "r");
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	fseek(fp, 0, SEEK_SET);
	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);

	fread(buffer, 1, size, fp);

	for (int i = size - 1; 0 <= i; i--) {
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	}

	free(buffer);
	fclose(fp);

	return 0;

}