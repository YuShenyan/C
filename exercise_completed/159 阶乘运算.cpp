/*********************************************************************
    Program :159 �׳�����
    Author: ������
    Date: 2021-11-21 16:59
    Note : ��ǿ���磡
*********************************************************************/
#include <stdio.h>

float Mul(int n) {
	float i, cheng = 1;
	for (i = 1; i <= n; i++) {
		cheng *= i;
	}
	return cheng;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.2f", Mul(a) / Mul(b) / Mul(a - b));
	return 0;
}
