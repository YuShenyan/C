/*********************************************************************
    程序名:97 输出26个英文字母
    作者: 俞沈岩
    日期: 2021-11-07 10:36
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	char c;
	for ( c = 'a'; c <= 'z'; c++) {
		printf("%c ", c);
	}
	printf("\n");
	for (c = 'z'; c >= 'a'; c--) {
		printf("%c ", c);
	}
	return 0;
}
