#include <stdio.h>

int main() {
	int a, b;
	char n;
	scanf("%d%c%d", &a, & n, & b);
	if (n == '+')
		printf("%d%c%d=%d", a, n, b, a + b);
	if (n == '-')
		printf("%d%c%d=%d", a, n, b, a - b);
	if (n == '*')
		printf("%d%c%d=%d", a, n, b, a * b);
	if (n == '/')
		printf("%d%c%d=%d", a, n, b, a / b);
	if (n == '%')
		printf(" %d%c%d=%d", a, n, b, a % b);
	return 0;
}