//Date:2021/12/07 Tuesday
//Programme:176 中间数
//Descirtption:加强刻晴！！！
#include<stdio.h>

int main()
{
    int n,a[1000],i,j,temp;
    scanf("%d", &n);
    for (i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++)
    {
        for (j = i + 1; j < n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    i = n / 2;
    j = n / 2;
    while (a[i-1]==a[i]&&i-1>=0)
    {
        i--;
    }
    while (a[j+1]==a[j]&&j<n)
    {
        j++;
    }
    if(i==n-1-j)
    {
        printf("%d", a[j]);
    }
    else
    {
        printf("-1");
    }
    return 0;
}