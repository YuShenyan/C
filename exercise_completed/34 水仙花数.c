/*********************************************************************
    ������:34 ˮ�ɻ���
    ����: ������
    ����: 2021-11-13 22:45
    ˵��: ��ǿ���磡
*********************************************************************/
#include <stdio.h>
#include <math.h>

int function(int a, int b) {
	int c, d, n, i, m, j, he, ge = 0;
	c = (a < b ) ? a : b;//cΪ��˵�
	d = (a < b ) ? b : a;//dΪ�Ҷ˵�
	if(c<100)
	c=100;//���ǵ�ˮ�ɻ�����λ��������ڵ����������ٵô�100��ʼͳ��
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
