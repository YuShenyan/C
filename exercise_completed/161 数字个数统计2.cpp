/*********************************************************************
    程序名:161 数字个数统计2
    作者: 俞沈岩
    日期: 2021-11-09 20:35
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>
int ji = 0, ou = 0, san = 0, wu = 0, qi = 0, n, i;

int Even() {
	ou++;
	return 0;
}

int Odd() {
	ji++;
	return 0;
}

int Sum_3() {
	san++;
	return 0;
}

int Sum_5() {
	wu++;
	return 0;
}

int Sum_7() {
	qi++;
	return 0;
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0)
			Even();
		if (i % 2 == 1)
			Odd();
		if (i % 3 == 0)
			Sum_3();
		if (i % 5 == 0)
			Sum_5();
		if (i % 7 == 0)
			Sum_7();
	}
	printf("%d %d %d %d %d", ji, ou, san, wu, qi);
	return 0;
}
