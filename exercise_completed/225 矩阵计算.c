// Date:2021/12/26 Sunday
// Programme:225 矩阵计算
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int x, y, a[3][3];
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++)
            scanf("%d", &a[x][y]);
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            printf("%d ", a[x][y] + a[y][x]);
        putchar('\n');
    }

    return 0;
}