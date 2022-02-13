//Date:2022/02/13 Sunday
//Programme:232_判断字符串是否是回文_指针练习
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
int main()
{
    char string[51]={};
    char temp[51]={};
    gets(string);
    int len = strlen(string);
    int i;
    for (i = 0; i < len;i++)
    {
        temp[len - i-1] = string[i];//temp为string字符串反序
    }
    if(strcmp(string,temp)==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
        return 0;
}