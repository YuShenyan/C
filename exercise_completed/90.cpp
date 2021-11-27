#include <stdio.h>

int main() {
	char a, b, c;
	int sum;
	scanf("%c%c%c", &a, &b, &c);
	printf("%d", a + b + c - 48 * 3);
	return 0;
}