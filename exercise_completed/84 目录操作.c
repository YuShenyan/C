// Date:2022/01/08 Saturday
// Programme:84 目录操作
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
int main()
{
    char a[201] = {}, b[201] = {}; // a用于记录当前目录,b为输入命令
    int i,j;                         //输入数字
    gets(a);
    gets(b);
    while (strcmp(b, "pwd") != 0)
    {
        if (strcmp(b, "cd /") == 0)
        {
            strcpy(a, "/");
        }
        else if (strcmp(b, "cd ..") == 0)
        {
            if (strcmp(a, "/") == 0) //当前目录为根目录时不执行操作
            {
                ;
            }
            else
            {
                for (i = strlen(a) - 1; a[i] != '/'; i--)
                {
                    a[i] = '\0';
                }
                if (i > 0)
                    a[i] = '\0';
            }
        }
        else if (b[3] == '/' && b[4] != '\0')
        {
            for (i = 0; i < strlen(b) - 3; i++)
            {
                a[i] = b[i + 3];               
            }
            a[i] = '\0';
        }
        else
        //这部分我整整用了一个星期才发现问题在哪
        //我本来是直接对a[strlen(a)]赋值的，后来发现，在切换目录时没有对后续进行清零，会导致strlen(a)数值出错
        {
            if (strcmp(a,"/")==0)
                ;
            else
            {
                a[strlen(a) + 1] = '\0';
                a[strlen(a)] = '/';
            }
            j = strlen(a);
            for (i =0;i+3<strlen(b);i++)
            {
                a[j + i] = b[i + 3];
            }
            a[j + i] = '\0';
            
        }
        gets(b);
    }
    puts(a);
    return 0;
}