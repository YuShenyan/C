/*********************************************************************
    Program :65 数字处理
    Author: 俞沈岩
    Date: 2021-11-21 16:49
    Note : 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int n, sum;
	scanf("%d", &n);
	sum = n;
	while (sum > 9) {
		n = sum;
		sum = 0;
		while (n != 0) {

			sum += n % 10;
			n /= 10;
		}
	}
	printf("%d", sum);
	return 0;
}
