// Date:2021/12/26 Sunday
// Programme:238 数组鞍点
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int a[5][6] = {0}, max[5][6] = {0}, min[5][6] = {0};
    int i, j;
    for (i = 1; i <= 4; i++)
        for (j = 1; j <= 5; j++)
            scanf("%d", &a[i][j]);
    int max_index, min_index;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1, max_index = 1; j <= 5; j++)
        {
            if (a[i][j] > a[i][max_index])
                max_index = j;
        }
        max[i][max_index] = 1;
    }
    for (j = 1; j <= 5; j++)
    {
        for (i = 1, min_index = 1; i <= 4; i++)
        {
            if (a[i][j] < a[min_index][j])
                min_index = i;
        }
        min[min_index][j] = 1;
    }
    int change = 0;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (max[i][j] && min[i][j])
            {
                printf("%d %d %d\n", a[i][j], i, j);
                change = 1;
            }
        }
    }
    if (!change)
    {
        printf("鞍点不存在");
    }

    return 0;
}