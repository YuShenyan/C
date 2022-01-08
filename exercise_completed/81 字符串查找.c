// Date:2022/01/06 Thursday
// Programme:81 字符串查找
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
//对大小写敏感
int compare_1(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}
//对大小写不敏感
int compare_0(int a, int b)
{
    if (a >= 'a' && a <= 'z')
    {
        if (a == b || a - 32 == b)
            return 1;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        if (a == b || a + 32 == b)
            return 1;
    }
    else
    {
    }
    return 0;
}
int main()
{
    int n, j, i, b, k;
    char a[101] = {};
    scanf("%s", a);
    scanf("%d", &b);
    scanf("%d", &n);
    char c[100][101] = {};
    for (i = 0; i < n; i++)
    {
        scanf("%s", c[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j + strlen(a) <= strlen(c[i]); j++)
        {
            if (b)
            {
                if (compare_1(a[0], c[i][j]))
                {
                    for (k = 0; k < strlen(a) && compare_1(a[k], c[i][j + k]); k++)
                    {
                    }
                    if (k == strlen(a))
                    {
                        puts(c[i]);
                        break; //无break会导致在同一行字符串中多次出现指定字段时反复输出改行
                    }
                }
            }
            else
            {
                if (compare_0(a[0], c[i][j]))
                {
                    for (k = 0; k < strlen(a) && compare_0(a[k], c[i][j + k]); k++)
                    {
                    }
                    if (k == strlen(a))
                    {
                        puts(c[i]);
                        break; //同上
                    }
                }
            }
        }
    }
    return 0;
}