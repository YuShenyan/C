//Date:2022/02/13 Sunday
//Programme:233_字符串部分复制——指针练习
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
void copystr(char *a,char *b,int m)
{
    int i;
    for (i = 0; *(a + i+m-1) != '\0';i++)
    {
        *(b + i) = *(a + m + i-1);
    }
}
int main()
{
    int m;
    char string[100]={};
    char temp[100] = {};
    gets(string);
    scanf("%d", &m);
    
    if (strlen(string) <m)
    {
        printf("error");
    }
    else
    {
        copystr(string, temp, m);
    }
    puts(temp);
    return 0;
}