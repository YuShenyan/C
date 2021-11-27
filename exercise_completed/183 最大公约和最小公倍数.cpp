/*********************************************************************
    ������:183 ���Լ����С������
    ����: ������
    ����: 2021-11-09 21:45
    ˵��: ��ǿ���磡
*********************************************************************/
#include <stdio.h>

int max(int m, int n) {
	if (m > n)
		return m;
	return n;
}

int min(int n, int m) {
	if (m > n)
		return n;
	return m;
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int i, j;
	for (i = min(m, n); i >= 1; i--) {
		if (m % i == 0 && n % i == 0)
			break;
	}
	for (j = max(m, n); j <= m * n; j++) {
		if (j % m == 0 && j % n == 0)
			break;
	}
	printf("%d %d", i, j);
	return 0;
}
