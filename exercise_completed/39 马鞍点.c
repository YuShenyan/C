#include <stdio.h>
int main()
{
    int a[100][100], m, n,  x, y, change = 0, b[100], c[100]; //b[x]为每行中最小的元素，c[y]为每列中最大的元素
    scanf("%d %d", &m, &n);                                                   //m行n列
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    //b[x]记录每行的最小元素
    for (x = 0; x < m; x++)
    {
        for (y = 0, b[x] = a[x][0]; y < n; y++)
        {
            if (a[x][y] < b[x])
                b[x] = a[x][y];
        }
    }
    //c[y]记录每行的最大元素
    for (y = 0; y < n; y++)
    {
        for (x = 0, c[y] = a[0][y]; x < m; x++)
        {
            if (a[x][y] > c[y])
            {
                c[y] = a[x][y];
            }
        }
    }
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < n; y++)
        {
            if (b[x] == c[y])
            {
                printf("%d %d %d\n", x, y, b[x]);
                change = 1;
            }
        }
    }
    if(change==0)
        printf("no\n");
    return 0;
}