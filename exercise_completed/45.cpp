#include <stdio.h>
#include <math.h>

int main() {
	int n, i, a[30], cha, max = 0;
	scanf("%d", & n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n; i++) {
		cha = fabs(a[i - 1] - a[i]);
		if (cha > max) {
			max = cha;
		}
	}
	printf("%d", max);
	return 0;
}