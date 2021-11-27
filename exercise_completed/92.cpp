#include <stdio.h>

int main() {
	int money, n1, n2, n3, n4, n5, n6;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	n4 = 0;
	n5 = 0;
	n6 = 0;
	scanf("%d", &money);
	while (money >= 100) {
		money -= 100;
		n1 += 1;
	}
	while (money >= 50) {
		money -= 50;
		n2 += 1;
	}
	while (money >= 20) {
		money -= 20;
		n3 += 1;
	}
	while (money >= 10) {
		money -= 10;
		n4 += 1;
	}
	while (money >= 5) {
		money -= 5;
		n5 += 1;
	}
	while (money >= 1) {
		money -= 1;
		n6 += 1;
	}
	printf("%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);
	return 0;
}