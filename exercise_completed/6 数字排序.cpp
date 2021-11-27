/*********************************************************************
    Program :6 数字排序
    Author: 俞沈岩
    Date: 2021-11-21 17:09
    Note : 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main() {
	int n, i, j, k, temp;
	scanf("%d", &n);//输入n
	int a[n], b[n] = {0};
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		temp = a[i];
		while (a[i] != 0) {
			b[i] += a[i] % 10;
			a[i] /= 10;
		}
		a[i] = temp;
	}//b[n]中的数字为对应a[n]中各数字的各位数字和
	for (i = 0; i < n; i++) {
		for (j = i + 1, k = i; j < n; j++) {
			if (b[j] > b[k]) {
				k = j;
			} else if (b[k] == b[j]) {
				if (a[j] < a[k]) {
					k = j;//记录符合条件项的标号
				}
			}
		}
		temp = b[i];
		b[i] = b[k];
		b[k] = temp;
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}//选择排序法
	for (i = 0; i < n; i++) {
		printf("%d %d\n", a[i], b[i]);
	}
	return 0;
}
