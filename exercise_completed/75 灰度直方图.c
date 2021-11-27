#include <stdio.h>
int main()
{
    int m, n, x, y, b[16] = {0}, i; //b[16]记录各灰度数量
    scanf("%d %d ", &m, &n);        //m为宽，n为高
    int a[256][256];
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
        {
            scanf("%d", &a[x][y]); //x为行数，y为列数
            for (i = 0; i < 16; i++)
            {
                if (a[x][y] == i)
                {
                    b[i]++; //颜色与序号相同，则对应的b[i]++
                    goto out;
                }
            }
        out:;
        }
    }
    for (i = 0; i < 16; i++)
    {
        if (b[i] != 0)
            printf("%d %d\n", i, b[i]);
    }
    return 0;
}