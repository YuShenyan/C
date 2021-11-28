#include <stdio.h>
int main()
{
    char str[1000] = {'\0'};
    int i, a = 0, b = 0; //a，b分别统计字母和数字的个数
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            a++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            b++;
        }
    }
    printf("%d,%d", a, b);
    return 0;
}