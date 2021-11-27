/*********************************************************************
    Program :159 Ω◊≥À‘ÀÀ„
    Author: ”·…Ú—“
    Date: 2021-11-21 16:59
    Note : º”«øøÃ«Á£°
*********************************************************************/
#include <stdio.h>

float Mul(int n) {
	float i, cheng = 1;
	for (i = 1; i <= n; i++) {
		cheng *= i;
	}
	return cheng;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.2f", Mul(a) / Mul(b) / Mul(a - b));
	return 0;
}
