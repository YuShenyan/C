/*********************************************************************
    程序名:56 直角三角形
    作者: 俞沈岩
    日期: 2021-10-31 10:43
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a * a + b * b == c * c)
		printf("%d", a * b);
	else if (a * a == b * b + c * c)
		printf("%d", b * c);
	else if (a * a + c * c == b * b)
		printf("%d", a * c);
	else
		printf("no");
	return 0;
}
