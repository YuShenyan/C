//Date:2022/02/14 Monday
//Programme:135_拼数字排序
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
int main()
{
    char string[101] = {};
    
    int num[101] = {};
    gets(string);
    int i, j=0,k,temp;
    int prev=0;
    for (i = 0; i < strlen(string);i++)
    {
        if(string[i]>='0'&&string[i]<='9')
        {
            num[j] *= 10;
            num[j] += string[i]-'0';
            prev = 1;
        }
        else if(prev)
        {
            j++;
            prev = 0;
        }
    }
        if ((string[strlen(string) - 1] >= '0' && string[strlen(string) - 1] <= '9'))
            j++;//这步使j对应num[]中的元素个数
        for (i = 0; i < j;i++)
        {
            for (k = i + 1; k < j;k++)
            {
                if(num[i]<num[k])
                {
                    temp = num[i];
                    num[i] = num[k];
                    num[k] = temp;
                }
            }
        }
        for (i = 0; i < j;i++)
        {
            printf("%d ", num[i]);
        }
            return 0;
    
}