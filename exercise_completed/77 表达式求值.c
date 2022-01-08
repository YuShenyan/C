// Date:2022/01/01 Saturday
// Programme:77 表达式求值
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
int main()
{
    int i, a = 0, b = 0;
    char c[20];
    gets(c);
    for (i = 0; c[i] < '0' || c[i] > '9'; i++) //寻找第一个数字
    {
        ;
    }
    for (; c[i] != ' '; i++) //确定第一个数
    {
        a = a * 10 + (c[i] - '0');
    }
    for (; c[i] < '0' || c[i] > '9'; i++) //寻找第二个数的第一个数字
    {
        ;
    }
    for (; c[i] != ' ' && i < strlen(c); i++) //确定第二个数同时防止溢出
    {
        b = b * 10 + (c[i] - '0');
    }
    for (i = 0; c[i] != '+' && c[i] != '-' && c[i] != '*' && c[i] != '/' && c[i] != '%' && i < strlen(c); i++) //确定运算符
    {
        ;
    }
    if (c[i] == '+')
        printf("%d", a + b);
    else if (c[i] == '-')
        printf("%d", a - b);
    else if (c[i] == '*')
        printf("%d", a * b);
    else if (c[i] == '/')
        printf("%d", a / b);
    else if (c[i] == '%')
        printf("%d", a % b);
    return 0;
}
