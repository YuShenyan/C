// Date:2021/12/02 Thursday
// Programme:164 转换排序--数组中的元素排序练习
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    char str[80]={'\0'}, b[80]={'\0'}, temp;
    gets(str);
    int i, j = 0, k, c[80]={0};
    //b[]记录字符，c[]记录下标
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            b[j] = str[i];
            c[j] = i;
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        for (k = i + 1; k < j; k++)
        {
            if (b[k] < b[i])
            {
                temp = b[k];
                b[k] = b[i];
                b[i] = temp;
                temp = str[c[k]];
                str[c[k]] = str[c[i]];
                str[c[i]] = temp;
            }
        }
    }
    for (i = 0; str[i] != '\0';i++)
    {
        printf("%c", str[i]);
    }
}