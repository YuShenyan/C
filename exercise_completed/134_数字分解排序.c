// Date:2022/02/14 Monday
// Programme:134_数字分解排序
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
#include <string.h>
int main()
{
    char num[11] = {};
    gets(num);
    int i, j, temp;
    for (i = 0; i < strlen(num); i++)
    {
        for (j = i + 1; j < strlen(num); j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i < strlen(num); i++)
    {
        printf("%d ", num[i] - '0');
    }
    return 0;
}