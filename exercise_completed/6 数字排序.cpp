/*********************************************************************
    Program :6 ��������
    Author: ������
    Date: 2021-11-21 17:09
    Note : ��ǿ���磡
*********************************************************************/
#include <stdio.h>

int main()
{
	int n, i, j, k, temp;
	scanf("%d", &n); //����n
	int a[n], b[n] = {0};
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		temp = a[i];
		while (a[i] != 0)
		{
			b[i] += a[i] % 10;
			a[i] /= 10;
		}
		a[i] = temp;
	} //b[n]�е�����Ϊ��Ӧa[n]�и����ֵĸ�λ���ֺ�
	for (i = 0; i < n; i++)
	{
		for (j = i + 1, k = i; j < n; j++)
		{
			if (b[j] > b[k])
			{
				k = j;
			}
			else if (b[k] == b[j])
			{
				if (a[j] < a[k])
				{
					k = j; //��¼����������ı��
				}
			}
		}
		temp = b[i];
		b[i] = b[k];
		b[k] = temp;
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	} //ѡ������
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}
	return 0;
}
