#include <stdio.h>
int main()
{
    int a[100][100], i, x, y, n, m, max, chang, mo[100]; //mo用于记录结束位置
    scanf("%d %d", &m, &n);
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    for (x = 0; x < m; x++)
    {
        for (i = 0; i < n; i++)
        {
            mo[i] = 0;
        }
        for (y = 0, max = 0, chang = 0; y < n; y++)
        {

            if (a[x][y] == 1)
            {
                chang += 1;
                mo[chang] = y;
            }
            else if (a[x][y] == 0)
            {
                chang = 0;
            }
            if (chang > max)
            {
                max = chang;
            }
        }
        if (max == 0)
        {
            printf("-1 -1\n");
        }
        else
        {
            printf("%d %d\n", mo[max] - max + 1, mo[max]);
        }
    }
    return 0;
}