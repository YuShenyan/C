/*********************************************************************
    程序名:98 成绩分级
    作者: 俞沈岩
    日期: 2021-11-07 10:51
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	float a;
	scanf("%f", &a);
	if (a >= 90) {
		printf("%.2f A", a);
		return 0;
	}
	if (a >= 80 && a < 90) {
		printf("%.2f B", a);
		return 0;
	}
	if (a >= 70 && a < 80) {
		printf("%.2f C", a);
		return 0;
	}
	if (a >= 60 && a < 70) {
		printf("%.2f D", a);
		return 0;
	}
	if (a < 60) {
		printf("%.2f E", a);
		return 0;
	}
}
