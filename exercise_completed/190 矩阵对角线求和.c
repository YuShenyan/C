// Date:2021/12/07 Tuesday
// Programme:190 矩阵对角线求和
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int a[3][3],x,y,sum=0;
    for (x = 0; x < 3;x++)
    {
        for (y = 0; y < 3;y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    for (x = 0, y = 0; x < 3 && y < 3; x++, y++)
    {
        sum += a[x][y];
    }
    printf("%d", sum);
    return 0;
}