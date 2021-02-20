#include <stdio.h>

struct DeviceOption {
	union {
		short option;
		struct {
			char boot;
			char interrupt;
		};
	};
};

int main()
{
	struct DeviceOption opt;

	opt.boot = 0x22;
	opt.interrupt = 0x11;

	printf("0x%x\n", opt.option);

	return 0;
}