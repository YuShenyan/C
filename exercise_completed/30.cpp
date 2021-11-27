#include <stdio.h>

int main() {
	int a, b, i, y, sum ;
	scanf("%d %d", &a, &b);
	for (i = a; i < b + 1; i++) {
		for (y = 1; y < i ; y++) {
			if (i % y == 0) {
				sum += y;
			}
			//	printf("%d", sum);
		}
		if (sum == i) {
			printf("%d\n", sum);
		}
		sum = 0;
	}
	return 0;
}