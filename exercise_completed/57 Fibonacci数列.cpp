/*********************************************************************
    Program :57 Fibonacci����
    Author: ������
    Date: 2021-11-21 16:33
    Note : ��ǿ���磡
*********************************************************************/
#include <stdio.h>

int fib(int n)
{
	int F[41] = {7, 11};
	int i;
	for (i = 2; i <= n ; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	return F[n];
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", fib(a));
}
