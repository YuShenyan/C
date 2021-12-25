#include <stdio.h>

int main() {
	float a, fee;
	scanf("%f", &a);
	if (a >= 0 && a <= 110)
		fee = a * 0.5;
	else if (a > 110 && a <= 210)
		fee = 55 + (a - 110) * 0.55;
	else
		fee = 110 + (a - 210) * 0.70;
	printf("%.2f", fee);
	return 0;
}