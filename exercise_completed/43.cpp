#include <stdio.h>

int main() {
	int n, max, min;
	int b = 0;
	scanf("%d", &n);
	if (n == 0)
		printf("1 0 0");
	else {
		max = n % 10;
		min = n % 10;
		while (n != 0) {
			if (max < n % 10) {
				max = n % 10;
			}
			if (min > n % 10) {
				min = n % 10;
			}
			n /= 10;
			b++;
		}
		printf("%d %d %d", b, max, min);
	}
	return 0;
}