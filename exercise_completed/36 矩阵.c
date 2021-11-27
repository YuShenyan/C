#include <stdio.h>
int main()
{
    int m, k = 0, i, j, temp;
    scanf("%d", &m);
    int a[20][20], b[20 * 2 + 2] = {0}; //b[]中有2m+2个数
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[k] += a[i][j];
        }
        k++;
    } //计算各行和
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[k] += a[j][i];
        }
        k++;
    } //计算各列和
    for (i = 0, j = 0; i < m; i++, j++)
    {
        b[k] += a[i][j];
    } //主对角线和
    k++;
    for (i = m - 1, j = 0; i >= 0; i--, j++)
    {
        b[k] += a[i][j];
    } //辅对角线和

    for (i = 0; i < 2 * m + 1; i++)
        for (k = 0; k < 2 * m + 1 - i; k++)
        {
            if (b[k] < b[k + 1])
            {
                temp = b[k];
                b[k] = b[k + 1];
                b[k + 1] = temp;
            }
        }

    for (i = 0; i < 2 * m + 2; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}