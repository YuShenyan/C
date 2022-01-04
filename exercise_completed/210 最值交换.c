// Date:2021/12/25 Saturday
// Programme:210 最值交换
// Descirtption:加强刻晴！！！
#include <stdio.h>
void change(int *a, int n)
{
    int i, max_index = 0, min_index = 0;
    int temp;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > *(a + max_index))
            max_index = i;
        if (*(a + i) < *(a + min_index))
            min_index = i;
    }
    temp = *(a + max_index);
    *(a + max_index) = *(a + min_index);
    *(a + min_index) = temp;
}
int main()
{
    int n, i;
    int num[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    change(num, n);
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);
    return 0;
}