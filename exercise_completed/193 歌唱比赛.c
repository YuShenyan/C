// Date:2021/12/08 Wednesday
// Programme:193 歌唱比赛
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int i, n, a[10];
    scanf("%d", &n);
    float sum = 0;
    int max = 0,
        min = 100;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
        sum += a[i];
    }

    printf("%.2f", (sum - min - max) / (n - 2));
    return 0;
}