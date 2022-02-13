//Date:2022/02/13 Sunday
//Programme:237_字符串复制
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100]={},temp[100]={};
    gets(string);
    int m;
    scanf("%d", &m);
    char *p = string;//???我连数组都没用???
    if(m>strlen(string))
    {
        printf("error");
    }
    else
    {
        strcpy(temp, (p + m-1));
        puts(temp);
    }
        return 0;
}