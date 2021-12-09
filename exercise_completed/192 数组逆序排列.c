//Date:2021/12/07 Tuesday
//Programme:192 数组逆序排列
//Descirtption:加强刻晴！！！
#include<stdio.h>

int main()
{
    char a[6];
    int i;
    scanf("%c,%c,%c,%c,%c",&a[0],&a[1],&a[2],&a[3],&a[4]);
    a[5] = 0;
    for (i = 4; i >= 0;i--)
    {
        printf("%c ", a[i]);
    }
    return 0;
}