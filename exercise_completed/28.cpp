#include <stdio.h>

int main() {
	int y, m;
	scanf("%d %d", &y, &m);
	/*	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			printf("31");
		else if (m == 2) {
			if (y % 4 == 0) {
				if (y % 100 == 0) {
					if (y % 400 == 0)
						printf("29");
					else
						printf("28");
				} else
					printf("29");
			} else
				printf("28");
		} else
			printf("30");*/
	switch (m) {
		case 1:
			;
		case 3:
			;
		case 5:
			;
		case 7:
			;
		case 8:
			;
		case 10:
			;
		case 12:
			printf("31");
			break;
		case 4:
			;
		case 6:
			;
		case 9:
			;
		case 11:
			printf("30");
			break;
		case 2:
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				printf("29");
			else
				printf("28");
	}
	return 0;
}