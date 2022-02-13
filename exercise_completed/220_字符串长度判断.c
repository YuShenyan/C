//Date:2022/02/12 Saturday
//Programme:220_字符串长度判断
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
int strlen(char *p)
{
    int i = 0;
    while(*(p+i)!='\0')
    {i++;}
    return i;
}
int main()
{
    char string[1000] = {};
    gets(string);
    printf("%d",strlen(string));
    return 0;
}