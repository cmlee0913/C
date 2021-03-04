#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
	char a[3];
};
#pragma pack(pop)
int main()
{
	struct Packet pkt;

	printf("%d\n", sizeof(pkt));

	return 0;
}