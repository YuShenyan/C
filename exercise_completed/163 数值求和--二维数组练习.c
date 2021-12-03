// Date:2021/12/02 Thursday
// Programme:163 数值求和--二维数组练习
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int n, x, y;
    int a[20][20], sum = 0;
    // ge 用于储存出现过的元素
    scanf("%d", &n); //输入n
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]); //输入a[x][y]
        }
    }
    for (x = 0, y = 0; x < n && y < n; x++, y++)
    {
        sum += a[x][y];
    }
    for (x = n - 1, y = 0; x >= 0 && y < n; x--, y++)
    {
        sum += a[x][y];
    }
    if (n % 2 == 1)
    {
        sum -= a[n / 2][n / 2];
    }

    printf("%d", sum);
    return 0;
}