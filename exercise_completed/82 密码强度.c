#include <stdio.h>
int main()
{
    char str[50] = {'\0'};
    gets(str);
    int i = 0, safety = 0, a = 0, b = 0, c = 0, d = 0; //a,b,c,d用于判断是否存在该字符类型
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            a = 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            b = 1;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            c = 1;
        }
        else
        {
            d = 1;
        }
        i++;
    }
    if (i == 0)
    {
        printf("0");
        return 0;
    }
    if (i > 8)
    {
        safety++;
    }
    if (a)
    {
        safety++;
    }
    if (b)
    {
        safety++;
    }
    if (c)
    {
        safety++;
    }
    if (d)
    {
        safety++;
    }
    printf("%d", safety);
    return 0;
}