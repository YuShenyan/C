/*********************************************************************
    程序名:93 整数比较
    作者: 俞沈岩
    日期: 2021-11-07 09:52
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	printf("%d %d\n", b % 10, a * a);
	return 0;
}
