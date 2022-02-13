// Date:2022/02/13 Sunday
// Programme:78_机器人
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    int m, n, c, step = 0, i, j;
    char command[20][20];
    scanf("%d %d %d", &n, &m, &c);

    for (i = -1; i < n; i++)
    {
        gets(command[i]);
    }
    i = 0;
    j = c - 1;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        if (command[i][j] == 0)
        {
            printf("loop ");
            break;
        }
        step++;
        switch (command[i][j])
        {
        case 'N':
            command[i][j] = 0;
            i--;

            break;
        case 'E':
            command[i][j] = 0;
            j++;

            break;
        case 'S':
            command[i][j] = 0;
            i++;

            break;
        case 'W':
            command[i][j] = 0;
            j--;

            break;
        default:
            break;
        }
    }
    if (!(i >= 0 && i < n && j >= 0 && j < m))
    {
        printf("out ");
    }
    printf("%d", step);//虽然题目没讲清楚进入循环前的步数是怎么算的，不过，这么做是对的
    return 0;
}