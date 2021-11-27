/*********************************************************************
    Program :37 排序2
    Author: 俞沈岩
    Date: 2021-11-22 10:27
    Note : 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main()
{
	int n, i = 0, j = 0, l, m, a, b, temp;
	scanf("%d", &n); //输入整数n
	int ji[n], ou[n];
	for (b = 0; b < n; b++)
	{
		scanf("%d", &a);
		if (a % 2 == 0)
		{
			ou[j] = a;
			j++;
		}
		else
		{
			ji[i] = a;
			i++;
		}//ji[i]里有i个数ou[j]里有j个数
	}
	for (b = 0; b < i - 1 ; b++)
	{
		for (m = b, l = b + 1; l < i ; l++)
		{
			if (ji[l] > ji[m])
				m = l;
		}
		temp = ji[b];
		ji[b] = ji[m];
		ji[m] = temp;
	}
	for (b = 0; b < j - 1; b++)
	{
		for (m = b, l = b + 1; l < j ; l++)
		{
			if (ou[l] > ou[m])
				m = l;
		}
		temp = ou[b];
		ou[b] = ou[m];
		ou[m] = temp;
	}//分别用选择排序法对ji[]和ou[]进行排序
	for (b = 0; b < j ; b++)
	{
		printf("%d ", ou[b]);
	}
	for (b = 0; b < i ; b++)
	{
		printf("%d ", ji[b]);
	}
	return 0;
}
