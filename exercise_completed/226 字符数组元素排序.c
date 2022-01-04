// Date:2021/12/26 Sunday
// Programme:226 字符数组元素排序
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    int n = strlen(str);
    int i, j;
    char temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[j] < str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}