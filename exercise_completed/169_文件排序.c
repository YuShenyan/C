// Date:2022/02/14 Monday
// Programme:169_文件排序
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    struct info
    {
        int year;
        int month;
        int day;
        int volume;
    } file[100], temp;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d/%d/%d %d", &file[i].year, &file[i].month, &file[i].day, &file[i].volume);
    }
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if ((file[i].year < file[j].year )||
                (file[i].year == file[j].year && file[i].month < file[j].month) ||
                (file[i].year == file[j].year && file[i].month == file[j].month && file[i].day < file[j].day) ||
                (file[i].year == file[j].year && file[i].month == file[j].month && file[i].day == file[j].day && file[i].volume < file[j].volume))
                {
                    temp = file[i];
                    file[i] = file[j];
                    file[j] = temp;
                }
        }

    for (i = 0; i < n;i++)
        printf("%d/%d/%d %d\n",file[i].year,file[i].month,file[i].day,file[i].volume);

    return 0;
}