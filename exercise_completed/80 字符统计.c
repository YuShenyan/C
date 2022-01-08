//Date:2022/01/06 Thursday
//Programme:80 字符统计
//Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    char a, b[101] = {'\0'};
    int c, i, count = 0;
    scanf("%c %d %s", &a, &c, b);
    if (c)
    {
        for (i = 0; b[i] != '\0'; i++)
        {
            if (a == b[i])
                count++;
        }
    }
    else
    {
        if (a >= 'a' && a <= 'z')
        {
            for (i = 0; b[i] != '\0'; i++)
            {
                if (a == b[i] || a - 32 == b[i])
                    count++;
            }
        }
        else
        {
            for (i = 0; b[i] != '\0'; i++)
            {
                if (a == b[i] || a + 32 == b[i])
                    count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}