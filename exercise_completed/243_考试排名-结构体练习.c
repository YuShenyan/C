//Date:2022/02/09 Wednesday
//Programme:243 考试排名
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    int score0;
    int sum;
} info[101],temp;
int main()
{
    int n,i,j;
    
    scanf("%d", &n);
    for (i = 0; i < n;i++)
    {
        scanf("%s %d %d %d %d %d %d", info[i].name,& info[i].score1, &info[i].score2,\
    &info[i].score3, &info[i].score4,& info[i].score5, &info[i].score0);
        info[i].sum = info[i].score1 + info[i].score2 + info[i].score3 + info[i].score4 + info[i].score5+info[i].score0;
    }
    for (i = 0; i < n;i++)
    {
        for (j = i + 1; j < n;j++)
        {
            if(info[i].sum<info[j].sum)
            {
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (info[i].sum == info[j].sum&&info[i].score0<info[j].score0)
            {
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
    for (i = 0; i < n;i++)
    {
        printf("%6s %3d %3d\n", info[i].name, info[i].sum, info[i].score0);
    }

        return 0;
}