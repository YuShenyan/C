// Date:2021/12/26 Sunday
// Programme:250 螺旋填数
// Descirtption:加强刻晴！！！
#include <stdio.h>
int down(int *, int, int, int, int);
int up(int *, int, int, int, int);
int right(int *, int, int, int, int);
int left(int *, int, int, int, int);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[100][100];
    right(&a[0][0], n, 1, m, n);
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        putchar('\n');
    }
    return 0;
}
// down(开始位置，填充个数，开始数,m,n)用于向下填充
int down(int *start, int a, int b, int m, int n)
{
    int i;

    for (i = 0; i < a; i++)
    {
        *(start + i * 100) = b + i;
    }
    if (a == 0)
        return 0;
    else
        left(start + i * 100 - 100 - 1, n - (m - a), b + i, m, n);
    return 0;
}
// up(开始位置，填充个数，开始数,m,n)用于向上填充
int up(int *start, int a, int b, int m, int n)
{
    int i;
    for (i = 0; i < a; i++)
    {
        *(start - i * 100) = b + i;
    }
    if (a == 0)
        return 0;
    else
        right(start - (i - 1) * 100 + 1, n - (m - a), b + i, m, n);
    return 0;
}
// right(开始位置，填充个数，开始数,m,n)用于向右填充
int right(int *start, int a, int b, int m, int n)
{
    int i;
    for (i = 0; i < a; i++)
    {
        *(start + i) = b + i;
    }
    if (a == 0)
        return 0;
    else
        down(start + (i - 1) + 100, m - (n - a) - 1, b + i, m, n);
    return 0;
}
// left(开始位置，填充个数，开始数,m,n)用于向左填充
int left(int *start, int a, int b, int m, int n)
{
    int i;
    for (i = 0; i < a; i++)
    {
        *(start - i) = b + i;
    }
    if (a == 0)
        return 0;
    else
        up(start - (i - 1) - 100, m - (n - a) - 1, b + i, m, n);
    return 0;
}