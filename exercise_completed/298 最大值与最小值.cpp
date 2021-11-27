/*********************************************************************
    程序名:298 最大值与最小值
    作者: 俞沈岩
    日期: 2021-11-12 15:29
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", (int)fmax(fmax(pow(a + b, 2), pow(a - b, 2)), fmax(a * a + b * b, a * a - b * b)),
	       (int)fmin(fmin(pow(a + b, 2), pow(a - b, 2)), fmin(a * a + b * b, a * a - b * b)));
	return 0;
}
