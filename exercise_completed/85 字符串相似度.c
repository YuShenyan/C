//Date:2022/01/14 Friday
//Programme:85 字符串相似度
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101]={},s2[101]={};
    int i,j,lenth,m,n;
    float lcs=0;
    gets(s1);
    gets(s2);
    for (i = 0; i < strlen(s1);i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i] += 32;
    }
    for (i = 0; i < strlen(s2); i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }
    for (i = 0; i < strlen(s1);i++)
    {
        for (j = 0; j < strlen(s2);j++)
        {
            lenth = 0;
            m = i;
            n = j;
            while (s1[m] == s2[n] && m < strlen(s1) && n < strlen(s2))
            {
                m++;
                n++;
                lenth++;
                if(lenth>lcs)
                    {lcs = lenth;}
            }
        }
    }
    printf("%.3f", (2 * lcs / (strlen(s1) + strlen(s2))));
    return 0;
}