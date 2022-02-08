//Date:2022/01/28 Friday
//Programme:242 成绩统计-结构体练习
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
struct info
{
    int id;
    char name[30];
    int scoreA;
    int scoreB;
    int scoreC;
    float average;
}student[100];

int main()
{
    int i,j,n,temp_int;
    float temp_float;
    char temp_char[30];
    scanf("%d", &n);
    for (i = 0; i < n;i++)
    {
        scanf("%d %s %d %d %d",&student[i].id,student[i].name, &student[i].scoreA, &student[i].scoreB, &student[i].scoreC);
        student[i].average = (float)(student[i].scoreA + student[i].scoreB + student[i].scoreC) / 3;
    }
    for (i = 0; i < n;i++)
    {
        for (j = i + 1; j < n;j++)
        {
            if(student[i].average<student[j].average)
            {
                temp_int = student[i].id;
                student[i].id = student[j].id;
                student[j].id = temp_int;
                strcpy(temp_char, student[i].name);
                strcpy(student[i].name,student[j].name);
                strcpy(student[j].name,temp_char);
                temp_float = student[i].average;
                student[i].average = student[j].average;
                student[j].average = temp_float;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (student[i].average == student[j].average && student[i].id > student[j].id)
            {
                temp_int = student[i].id;
                student[i].id = student[j].id;
                student[j].id = temp_int;
                strcpy(temp_char, student[i].name);
                strcpy(student[i].name, student[j].name);
                strcpy(student[j].name, temp_char);
                temp_float = student[i].average;
                student[i].average = student[j].average;
                student[j].average = temp_float;
            }
        }
    }
    for(i = 0;i < n;i++)
    printf("%d %s %.1f\n", student[i].id, student[i].name, student[i].average);
    return 0;
}