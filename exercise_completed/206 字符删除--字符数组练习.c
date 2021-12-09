// Date:2021/12/09 Thursday
// Programme:206 字符删除--字符数组练习
// Descirtption:加强刻晴！！！
#include <stdio.h>

void dele(char str[], char a)
{
    int i, j = 0;

    for (i = 0; str[i]; i++)
    {
        if (a != str[i])
            str[j++] = str[i];
    }
    str[j] = '\0';
}
int main()
{
    char str[51] = {0};
    gets(str);
    char a;
    scanf("%c", &a);
    dele(str, a);
    printf("%s", str);
    return 0;
}