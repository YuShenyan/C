/*********************************************************************
    程序名:299 奖金计算
    作者: 俞沈岩
    日期: 2021-11-12 15:40
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int I;
	float jin = 0;
	scanf("%d", &I);
	if (I > 1000000) {
		jin += 0.01 * (I - 1000000);
		I = 1000000;
	}
	if (I > 600000) {
		jin += 0.015 * (I - 600000);
		I = 600000;
	}
	if (I > 400000) {
		jin += 0.03 * (I - 400000);
		I = 400000;
	}
	if (I > 200000) {
		jin += 0.05 * (I - 200000);
		I = 200000;
	}
	if (I > 100000) {
		jin += 0.075 * (I - 100000);
		I = 100000;
	}
	jin += 0.1 * I;
	printf("%d", (int)jin);
	return 0;
}
