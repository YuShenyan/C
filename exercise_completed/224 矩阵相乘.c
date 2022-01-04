// Date:2021/12/24 Friday
// Programme:162 矩阵相乘
// Descirtption:加强刻晴！！！
//明明还没学到矩阵，为啥要出跟矩阵运算有关的题啊
#include <stdio.h>

int main()
{

    int a[2][3], b[3][2], c[2][2], i = 0, j = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    //谁能给我解释一下这部分是怎么搞出来的，公式我看不懂
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0];
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1];
    /*for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar('\n');
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", b[i][j]);
        putchar('\n');
    }*/

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        putchar('\n');
    }

    return 0;
}