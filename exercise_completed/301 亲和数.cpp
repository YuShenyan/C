/*********************************************************************
    ������:301 �׺���
    ����: ������
    ����: 2021-11-12 16:38
    ˵��: ��ǿ���磡
*********************************************************************/
#include <stdio.h>

int main() {
	int n, m, i, sum_n = 0, ge_n = 0, sum_m = 0, ge_m = 0;
	scanf("%d %d", &n, &m);
	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			sum_n += i;
			ge_n++;
		}

	}
	for (i = 1; i < m; i++) {
		if (m % i == 0) {
			sum_m += i;
			ge_m++;
		}
	}
	if (sum_m == n && sum_n == m)
		printf("yes %d %d", ge_n, ge_m);
	else
		printf("no %d %d", ge_n, ge_m);
	return 0;
}
