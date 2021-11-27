#include <stdio.h>

int main() {
	int day, wu, x, e;
	scanf("%d %d %d", &day, &wu, &x);
	e = x % 10;
	if (day >= 1 && day <= 5) {
		if (wu >= 200 && wu < 400) {

			if ((day == 1 && (e == 1 || e == 6)) || (day == 2 && (e == 2 || e == 7)) || (day == 3 && (e == 3 || e == 8))
			        || (day == 4 && (e == 4 || e == 9)) || (day == 5 && (e == 5 || e == 0)))
				printf("%d yes", e);

			else
				printf("%d no", e);
		} else if (wu >= 400) {
			if (((day == 1 || day == 3 || day == 5)
			        && (e == 1 || e == 3 || e == 5 || e == 7 || e == 9)) || ((day == 2 || day == 4) && (e == 0 || e == 2 || e == 4
			                || e == 6 || e == 8)))
				printf("%d yes", e);
			else
				printf("%d no", e);
		} else {
			printf("%d no", e);
		}
	} else
		printf("%d no", e);
	return 0;
}