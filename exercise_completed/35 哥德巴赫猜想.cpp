/*********************************************************************
    Program :35 哥德巴赫猜想
    Author: 俞沈岩
    Date: 2021-11-17 21:31
    Note : 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int n, i, j, k = 0, l = 0;
	int a[200] = {0}, b[200] = {0};//1000内的素数不超过200个
	scanf("%d", &n);
	if (n % 2 != 0) {
		printf("cnm");
		return 0;
	}//输入的n必须为偶数
	for (i = 2; i < n; i++) {
		for (j = 2; j <= n; j++) {
			if (i % j == 0 && i != j)//判断
				goto out;
		}
		a[k] = i;
		b[k] = i;
		k++;//把所有素数存入数组a和b
out:
		;
	}
	for (i = 0; i <= k / 2 + 1; i++) {//i从a[0]开始取
		for (l = k; l > k / 2 - 1; l--) {//l从b[k](即最大的一项）开始取
			if (a[i] + b[l] == n) {
				printf("%d %d", a[i], b[l]);
				return 0;
			}
		}
	}
	return 0;
}
