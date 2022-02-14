// Date:2022/02/14 Monday
// Programme:170_复试筛选
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
#include <string.h>
int main()
{
    struct info
    {
        char id[22];
        int total;
        int en;
    } stu[201] = {}, temp = {};
    int m, n;
    scanf("%d%d", &m, &n);
    int i, j;
    for (i = 0; i < m; i++)
        scanf("%s %d %d", stu[i].id, &stu[i].total, &stu[i].en);

    for (i = 0; i < m; i++)
        for (j = i + 1; j < m; j++)
        {
            if ((stu[i].total < stu[j].total) ||
                (stu[i].total == stu[j].total && stu[i].en < stu[j].en) ||
                (stu[i].total == stu[j].total && stu[i].en == stu[j].en && strcmp(stu[i].id, stu[j].id) > 0))
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    
    for (i = 0; i < n; i++)
        printf("%s %d %d\n", stu[i].id, stu[i].total, stu[i].en);

    return 0;
}