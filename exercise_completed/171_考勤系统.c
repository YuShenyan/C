// Date:2022/02/14 Monday
// Programme:171_考勤系统
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    int n, i, time[101] = {}, j, k = 0, exist[101] = {}, id;
    char t1[8] = {}, t2[8] = {};
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s", &id, t1, t2);//注意编号可能不止一位
        if (time[id] == 0)
            exist[k++] = id;
        time[id] += (t2[0] - t1[0]) * 600 + (t2[1] - t1[1]) * 60 + (t2[3] - t1[3]) * 10 + (t2[4] - t1[4]);
    }
    struct info
    {
        int id;
        int time;
    } stu[101] = {}, temp = {};
    for (i = 0; i < k; i++)
    {
        stu[i].id = exist[i];
        stu[i].time = time[exist[i]];
    }
    for (i = 0; i < k; i++)
        for (j = i + 1; j < k; j++)
        {
            if (stu[i].time < stu[j].time || (stu[i].time == stu[j].time && stu[i].id > stu[j].id))
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    for (i = 0; i < k; i++)
        printf("%d %d\n", stu[i].id, stu[i].time);

    return 0;
}