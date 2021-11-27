#include <stdio.h>

int main() {
	float fee, li, time, n;
	scanf("%f %f", &li, &time);
	if (li < 3)
		fee = 10;
	else if (li >= 3 && li < 10)
		fee = (li - 3) * 2 + 10;
	else (li >= 10);
	fee = 24 + (li - 10) * 3;
	fee = fee + time * 5 / 2;
	printf("%.0f", fee);
	return 0;
}