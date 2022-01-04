// Date:2022/01/01 Saturday
// Programme:73 字符串压缩
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    char a[51] = {0};

    int i, j;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        //由于输出字符串的位数小于100位，只需考虑数字为2位和1位的情况
        //数字为两位
        if (a[i + 1] >= '0' && a[i + 1] <= '9' && a[i + 2] >= '0' && a[i + 2] <= '9')
            for (j = 0; j < (a[i + 1] - '0') * 10 + a[i + 2] - '0'; j++)
                printf("%c", a[i]);
        //数字为一位
        else if ((a[i] < '0' || a[i] > '9') && a[i + 1] >= '0' && a[i + 1] <= '9')
            for (j = 0; j < a[i + 1] - '0'; j++)
                printf("%c", a[i]);
        //未压缩时直接输出
        else if (!(a[i] <= '9' && a[i] >= '0'))
            printf("%c", a[i]);
    }
    return 0;
}