/*********************************************************************
    程序名:寻找最大整数
    作者: 俞沈岩
    日期: 2021-10-31 10:11
    说明:
*********************************************************************/
#include <stdio.h>

int main() {
	int a[4], max, i;
	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	max = a[0];
	for (i = 1; i < 4; i++) {
		if (a[i] > max)
			max = a[i];
	}
	printf("%d", max);
	return 0;
}
