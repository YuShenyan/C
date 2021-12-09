// Date:2021/12/08 Wednesday
// Programme:210 后项除以前项
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {

        printf("%d ", a[i + 1] / a[i]);
    }
    return 0;
}