#include <stdio.h>

int main() {
	float h, m, t;
	scanf("%f %f", &h, &m);
	t = m / 60 + h;
	printf("%.2f", 4 * t * t / (t + 2) - 20);
	return 0;
}