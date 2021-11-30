#include <stdio.h>
int main()
{
    int n, i, j, k = 0, b[30] = {0}, a[30] = {0}, temp;
    //a[30]记录数据，b[30]记录次数
    scanf("%d", &n);
    //输入并统计元素种类和数目
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        for (j = 0; j < k; j++)
        {
            if (temp == a[j])
            {
                b[j]++;
                goto out;
            }
        }
        {

            a[k] = temp;
            b[k]++;
            k++; //a[0]到a[k-1]分别对应k个数据
        }
    out:;
    }
    //对元素进行排序
    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    //输出
    for (j = 0; j < k; j++)
    {
        printf("%d:%d\n", a[j], b[j]);
    }
}