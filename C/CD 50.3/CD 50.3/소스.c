#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;
	double distance;

	scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
	int x = p1.x - p2.x;
	int y = p1.y - p2.y;

	distance = sqrt((x * x) + (y * y));

	printf("%f\n", distance);

	return 0;
}