// Date:2021/12/25 Saturday
// Programme:223 对角线元素求和
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int a[3][3];
    int x, y;
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++)
            scanf("%d", &a[x][y]);
    printf("%d", a[0][0] + a[1][1] + a[2][2]);

    return 0;
}