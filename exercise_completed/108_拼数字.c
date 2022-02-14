// Date:2022/02/13 Sunday
// Programme:108_拼数字
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    unsigned a = 0;
    char string[101] = {}, number[101] = {};
    gets(string);
    int i, j = 0;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            number[j] = string[i];
            j++;
        }
    }
    for (i = 0; i < strlen(number); i++)
    {
        a *= 10;
        a += (number[i] - '0');
    }
    i = a - 1;
    while (i >= 1 && a % i != 0)
    {
        i--;
    }
    if (i < 0) //防止碰到a==0的情况，可以试试把这一步去掉带入a==0会发生什么
        i = 0;
    if (i == 1) //说明a为素数
        printf("%d", a);
    else
        printf("%d", i);
    return 0;
}