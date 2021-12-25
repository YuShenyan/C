#include <stdio.h>

int main() {
	float V, a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	V = a * b * c;
	printf("%-.3f", V);
	return 0;
}