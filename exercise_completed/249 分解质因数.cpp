/*********************************************************************
	程序名:249 分解质因数
	作者: 俞沈岩
	日期: 2021-11-12 15:15
	说明: 加强刻晴！
*********************************************************************/
#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	while (n != 0)
	{
		for (i = 2;i<1000; i++)
		{
			
				while (n % i == 0)
				{
					n /= i;
					printf("%d", i);
					if (n != 1)
						printf("*");
					else
						return 0;
				}
			
		}
	}
	
}
