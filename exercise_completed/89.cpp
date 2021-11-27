#include <stdio.h>

int main() {
	float r, V;
	scanf("%f", &r);
	V = r * r * r * 4 / 3 * 3.14;
	printf("%.2f", V);
	return 0;
}