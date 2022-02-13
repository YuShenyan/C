//Date:2022/02/09 Wednesday
//Programme:成绩统计
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
float aver(float* a)
{
    return (*a + *(a+4) + *(a+8) + *(a+12) + *(a+16)) / 5;
}
int fals(float* a)
{
    int n=0,i,j,count;
    for (i = 0; i < 5;i++)
    {
        count = 0;
        for (j = 0; j < 4;j++)
            {
                if (*(a + 4 * i +j)<60)
                    count++;
            }
            if(count>=2)
                n++;
    }
    return n;
}
int well(float* a)
{
    int i, j,n=0;
    for (i = 0; i < 5;i++)
    {
        int sum = 0,count=0;
        for (j = 0; j < 4;j++)
        {
            sum += *(a + 4 * i + j);
            if (*(a + 4 * i + j)>=85)
                {count++;}
        }
        if(sum>=90*5||count==4)
        {
            n++;
        }
    }
    return n;
}
int main()
{
    float stu[5][4];
    
    int i, j;
    for (i = 0; i < 5;i++)
        for (j = 0; j < 4;j++)
            scanf("%f", &stu[i][j]);
    printf("%.1f %d %d", aver(&stu[0][0]), fals(&stu[0][0]), well(&stu[0][0]));
    return 0;
}