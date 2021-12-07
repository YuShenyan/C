// Date:2021/12/02 Thursday
// Programme:165 最值位置--数组数列元素查询练习
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int n, i, max, max_index = 0, a[80];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }
    printf("%d %d %d", n, max, max_index);
    return 0;
}