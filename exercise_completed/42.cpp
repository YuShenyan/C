#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % b == 0)
		printf("yes");
	if (a % b > 0)
		printf("%d %d", (a - a % b) / b, a % b);
	return 0;
}