#include <stdio.h>
int main()
{
    int m, n, i, j;
    scanf("%d %d", &n, &m); //输入两个整数m，n
    int a[32][32] = {0}, b[32][32] = {0};
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < m + 1; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < m + 1; j++)
        {
            if (a[i][j] == a[i - 1][j] && a[i][j] == a[i + 1][j])
            {
                b[i - 1][j] = 0;
                b[i][j] = 0;
                b[i + 1][j] = 0;
            }
            if (a[i][j] == a[i][j - 1] && a[i][j] == a[i][j + 1])
            {
                b[i][j - 1] = 0;
                b[i][j] = 0;
                b[i][j + 1] = 0;
            }
        }
    }
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < m + 1; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}