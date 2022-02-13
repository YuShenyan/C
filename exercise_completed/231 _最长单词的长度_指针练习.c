//Date:2022/02/12 Saturday
//Programme:231 _最长单词的长度_指针练习
//Descirtption:心有所向，日复一日，必有精进。
//这题需要用指针吗？？
#include<stdio.h>

int main()
{
    char string[101]={};
    gets(string);
    int i,lenth=0,max=0;
    for (i = 0; string[i] != '.';i++)
    {
        if(string[i]!=' ')
        {
            lenth++;
        }
        else
        {
            lenth = 0;
        }
        if(lenth>max)
        {
            max = lenth;
        }
    }
    printf("%d", max);
    return 0;
}