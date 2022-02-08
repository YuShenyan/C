// Date:2022/01/14 Friday
// Programme:109 处理字符串
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
#include <string.h>
int main()
{
    char a[101] = {}, b[101] = {}, c[101] = {};
    int i, e, j = 0, k = 0;
    gets(a);
    e = a[0];
    for (i = 1; i < strlen(a); i++)
    {
        if (a[i] > e)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }

    //对c中字符进行升序排序
    char temp;
    {
        for (i = 0; i < strlen(c); i++)
        {
            for (j = i + 1; j < strlen(c); j++)
            {
                if (c[j] < c[i])
                {
                    temp = c[i];
                    c[i] = c[j];
                    c[j] = temp;
                }
            }
        }
    }
    b[strlen(b)] = e;
    strcat(b, c);
    puts(b);
    return 0;
}