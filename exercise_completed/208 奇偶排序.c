// Date:2021/12/25 Saturday
// Programme:208 奇偶排序
// Descirtption:加强刻晴！！！
#include <stdio.h>
// sort用于数字进行排序
//*a为开始位置，n为个数
//采用选择排序，换成其他排序方法也是一样的
void selection_Sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + j) < *(a + i))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
// sort 用于判断数字的奇偶，并将奇数部分和偶数部分传递给sort
void sort(int *a, int n)
{
    int b[20];
    int i;
    for (i = 0; i < n; i++)
        b[i] = *(a + i);
    int num_odd = 0, num_even = 0;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            b[num_odd] = *(a + i);
            num_odd++;
        }
        else
        {
            b[n - num_even - 1] = *(a + i);
            num_even++;
        }
    }
    //对奇数部分进行排序
    selection_Sort(b, num_odd);
    //对偶数部分进行排序(注意开始位置，这个开始位置导致我调试了几个小时)
    selection_Sort(&b[n - num_even], num_even);
    for (i = 0; i < n; i++)
        *(a + i) = b[i];
}
int main()
{
    int n, i;
    //输入部分
    scanf("%d", &n);
    int num[20] = {0};
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    sort(num, n);
    //输出部分
    int change = 0;
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0)
        {
            change = 1;
        }
        if (num[i] % 2 == 0 && change)
        {
            change = 0;
            printf("  ");
        }
        printf("%d ", num[i]);
    }
    return 0;
}