#include <stdio.h>


int main() {
	float a, b, c, sum;
	scanf("%f %f %f", &a, &b, &c);
	sum = (a + b + c) / 3;
	printf("%.2f", sum);
	return 0;
}