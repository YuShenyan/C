// Date:2022/01/01 Saturday
// Programme:72 寻找最长的行
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
int main()
{
    // a为输入内容，b用于储存最长行，c用于确认输入条件
    char a[101], b[101], c[101] = "***end***";
    int lenth = 0;
    while (strcmp(a, c) != 0)
    {
        gets(a);
        //比较条件为大于，这样长度相等是b中的内容为第一行
        if (strlen(a) > lenth)
        {
            lenth = strlen(a);
            strcpy(b, a);
        }
    }
    printf("%d\n", lenth);
    puts(b);

    return 0;
}