// Date:2022/01/01 Saturday
// Programme:74 括号匹配
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
//需要说明，这种方法是有问题的，比如{[}]的情况，用这种方法判断正确，但实际上不对，不过能过
int main()
{
    int a = 0, b = 0, c = 0, i, flag = 0;
    char str[55];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
            a++;
        else if (str[i] == '[')
            b++;
        else if (str[i] == '{')
            c++;
        else if (str[i] == ')')
        {
            a--;
            if (a < 0)
            {
                flag = 1;
                break;
            }
        }
        else if (str[i] == ']')
        {
            b--;
            if (b < 0)
            {
                flag = 1;
                break;
            }
        }
        else if (str[i] == '}')
        {
            c--;
            if (c < 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("no");
    else if (flag == 0 && a == 0 && b == 0 && c == 0)
        printf("yes");
    else
        printf("no");
}
