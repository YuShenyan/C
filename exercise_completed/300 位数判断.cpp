/*********************************************************************
    程序名:300 位数判断
    作者: 俞沈岩
    日期: 2021-11-12 16:19
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int n, wei = 0;
	scanf("%d", &n);
	if (n == 0) {
		printf("1");
		return 0;
	}
	while (n != 0) {
		n /= 10;
		wei++;
	}
	printf("%d", wei);
	return 0;
}
