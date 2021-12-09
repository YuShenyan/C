// Date:2021/12/08 Wednesday
// Programme:204 单词统计--字符数组练习
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
char string[101] = {'\0'}, temporary[9] = {'\0'};
void count()
{
    int i, j, length;
    int count = 0;
    for (i = 0; i < strlen(string); i += j + 1)
    {
        for (j = 0, length = 0; string[i + j] != ' ' && string[i + j] != '\0'; j++)
        {
            if (string[j + i] == temporary[j])
                length++;
        }
        if (length == strlen(temporary) && j == strlen(temporary))
            count++;
    }
    printf("%s %d", temporary, count);
}
int main()
{

    gets(string);
    gets(temporary);
    count();
    return 0;
}