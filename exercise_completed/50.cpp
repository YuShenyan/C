#include <stdio.h>

int main() {
	int n, i, c, ms = 0, sum, max = 0;
	scanf("%d", &n);
	int a[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}//���벿��
	for (i = 0; i < n; i++) {
		sum = 0;
		c = a[i];//��¼��ʼֵ
		while (a[i] != 0) {
			sum += a[i] % 10;
			a[i] /= 10;
		}//���λ����֮��
		if (sum > ms) {
			max = c;
			ms = sum;
			//printf("1|max=%d,c=%d,ms=%d", max, c, ms);
		}
		if (sum == ms && c > max) {
			max = c;
			//printf("2|max=%d,c=%d,ms=%d", max, c, ms);
		}
	}
	printf("\n%d", max);
	return 0;
}