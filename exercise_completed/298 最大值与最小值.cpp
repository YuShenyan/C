/*********************************************************************
    ������:298 ���ֵ����Сֵ
    ����: ������
    ����: 2021-11-12 15:29
    ˵��: ��ǿ���磡
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
