//比原版更简单
//基于rsm同学的程序修改得到
//我不知道命令行选项-后只跟一个字符，我以为能跟很多，比如-cp
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256] = {'\0'};
    int i, k = 0, n = 0;
    char c[256] = {'\0'};
    gets(str);
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '-' && (str[i - 1] == ' ' || i == 0))
        {
            c[k] = str[i + 1];
            k++;
            n++;
        }
    }
    if (n == 0)
    {
        printf("no");
    }
    else
    {

        int j, t;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1, k = i; j < n; j++)
                if (c[j] < c[k])
                    k = j;
            if (k != i)
            {
                t = c[i];
                c[i] = c[k];
                c[k] = t;
            }
        }
        for (k = 0; k < n - 1; k++)
        {
            if (c[k] == c[k + 1])
            {
                for (j = k + 1; j < n - 1; j++)
                    c[j] = c[j + 1];
                n--;
            }
        }
        for (k = 0; k < n; k++)
        {
            printf("-%c ", c[k]);
        }
    }
    return 0;
}
