#include <stdio.h>

int main() {
	int m, n, a = 0;
	scanf("%d", &n);
	for (m = 0; m <= n; m++) {
		if (n == m * m) {
			printf("%d", m);
			a = 1;
		}
	}
	if (a == 0) {
		printf("no");
	}
	return 0;
}