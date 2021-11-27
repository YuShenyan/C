#include <stdio.h>

int main() {
	float li, fee;
	int fen;
	scanf("%f %d", &li, &fen);
	fee = 10;
	if (li >= 3 && li < 10) {
		fee += 2 * (li - 3);
	} else if (li >= 10) {
		fee += 3 * (li - 10) + 14;
	} else {
	}
	if (fen >= 5) {
		fee += fen / 5 * 2;
	}
	printf("%.0f", fee);
	return 0;
}