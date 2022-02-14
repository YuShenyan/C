// Date:2022/02/14 Monday
// Programme:167_数字统计排序
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    struct number
    {
        int value;
        int times;
    } num0[1001], temp;
    int n, i, j = 0, k, numi[1001] = {}, a, record[1001] = {};//numi得设成1001，不然统计不到1000
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        numi[a]++;
        if (numi[a] == 1)    //不统计重复数字
            record[j++] = a; //统计出现过的数字
    }
    for (i = 0; i < j; i++)
    {
        num0[i].value = record[i];
        num0[i].times = numi[record[i]];
    }
    for (i = 0; i < j; i++)
        for (k = i + 1; k < j; k++)
            if (num0[i].times < num0[k].times || (num0[i].times == num0[k].times && num0[i].value > num0[k].value))
            {
                temp = num0[i];
                num0[i] = num0[k];
                num0[k] = temp;
            }

    for (i = 0; i < j; i++)
        printf("%d %d\n", num0[i].value, num0[i].times);

    return 0;
}