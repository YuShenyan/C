#include <stdio.h>
int a = 0, i = 0;
char str[1000] = {'\0'};
void fun(char c)
{
    if (c >= 'a' && c <= 'z' || c <= 'Z' && c >= 'A')
    {
        a++;
    }
}
//fun()统计字母个数
void print()
{
    printf("%d", a);
}
//输出
int main()
{
    gets(str);
    while (str[i] != '\0')
    {
        fun(str[i]);
        i++;
    }
    print();
    return 0;
}