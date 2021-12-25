/*********************************************************************
    程序名:34 水仙花数
    作者: 俞沈岩
    日期: 2021-11-13 22:45
    说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>
#include <math.h>

int function(int a, int b) {
	int c, d, n, i, m, j, he, ge = 0;
	c = (a < b ) ? a : b;//c为左端点
	d = (a < b ) ? b : a;//d为右端点
	if(c<100)
	c=100;//考虑到水仙花数的位数必须大于等于三，至少得从100开始统计
	for (i = c; i <= d; i++) {
		m = i;
		n = 0;
		he = 0;
		while (i != 0) {
			i /= 10;
			n++;
		}
		i = m;
		while (i != 0) {
			he += pow(i % 10, n);
			i /= 10;
		}
		if (he == m) {
			ge++;
		}
		i = m;
	}
	return ge;
}

int main() {
	int A;
	int B;
	scanf("%d %d", &A, &B);
	printf("%d", function(A, B));
	return 0;
}
