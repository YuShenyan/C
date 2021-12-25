// Date:2021/12/25 Saturday
// Programme:207 单词排序
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>

void wd_sort(char (*s)[20], int n)
{
    int i, j;
    char temp[20] = {'\0'};
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(*(s + j), *(s + j + 1)) > 0)
            {
                strcpy(temp, *(s + j));
                strcpy(*(s + j), *(s + j + 1));
                strcpy(*(s + j + 1), temp);
            }
        }
}
int main()
{
    char str[10][20];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    wd_sort(str, n);
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}