#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a == 0)
		printf("%d", b);
	if (b == 0)
		printf("%d", a);
	if (a != 0 && b != 0) {
		c = a % b;
		while (c != 0) {
			a = b;
			b = c;
			c = a % b;
		}//Õ·×ªÏà³ý·¨
		printf("%d", b);
	}
	return 0;
}