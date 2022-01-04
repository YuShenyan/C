#include <stdio.h>
#include <string.h>
int main()
{
    char a[256] = {'\0'}, b[256][256] = {'\0'}, temp[256];
    gets(a);
    int i = 0, change = 0, j = 0, k = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '-')
        {
            change = 1;
            while (a[i] != ' ' && a[i] != '\0')
            {
                b[k][j] = a[i];
                j++;
                i++;
            }
            b[k][j] = ' ';
            j = 0;
            k++;
        }
    }

    if (!change)
    {
        printf("no");
    }
    else
    {
        //选择排序
        for (i = 0; i < k; i++)
        {
            for (j = i + 1; j < k; j++)
            {
                if (strcmp(b[i], b[j]) == 1)
                {
                    strcpy(temp, b[j]);
                    strcpy(b[j], b[i]);
                    strcpy(b[i], temp);
                }
            }
        }
        //去掉重复命令行
        i = 0;
        while (strlen(b[i]) > 0)
        {
            if (strcmp(b[i], b[i + 1]) == 0)
            {
                for (j = i; j < k; j++)
                {
                    strcpy(b[j], b[j + 1]);
                }
                k--;
            }
            else
                i++;
        }
        for (i = 0; i < k; i++)
            printf("%s", b[i]);
    }

    return 0;
}