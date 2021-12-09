// Date:2021/12/08 Wednesday
// Programme:200 数组元素平移
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temporary[10];
    int i, p;
    scanf("%d", &p);
    for (i = 0; i <=p;i++)
    {
        temporary[9-p + i] = array[i];
    }
    for (i = p + 1; i < 10;i++)
    {
        temporary[i - p - 1] = array[i];
    }
    for (i = 0; i < 10;i++)
    {
        printf("%d ", temporary[i]);
    }
    return 0;
}