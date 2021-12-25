#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <= 6 && b >= 6)
		printf("6\n");
	if (a <= 28 && b >= 28)
		printf("28\n");
	if (a <= 496 && b >= 496)
		printf("496\n");
	if (a <= 8128 && b >= 8128)
		printf("8218\n");
	return 0;
}