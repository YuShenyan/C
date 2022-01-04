// Date:2021/12/26 Sunday
// Programme:239 杨辉三角
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int num[10][10] = {1};
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < i - 1; j++)
        {
            num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
        }
        num[i][j] = 1;
    }
    for (i = 0; i < n+1;i++)
    {
        for (j = 0; j < i;j++)
            printf("%d ", num[i][j]);
        putchar('\n');
    }

        return 0;
    }