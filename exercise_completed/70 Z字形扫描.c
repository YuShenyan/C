#include <stdio.h>
int x, y, a[100][100], n;
void scan1() //左下到右上扫描
{
    for (; x > 0 && y < n - 1; x--, y++)
    {
        printf("%d ", a[x][y]);
    }
    printf("%d ", a[x][y]);
}
void scan2() //右上到左下扫描
{
    for (; y > 0 && x < n - 1; x++, y--)
    {
        printf("%d ", a[x][y]);
    }
    printf("%d ", a[x][y]);
}
int main()
{
    scanf("%d", &n);
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    x = 0;
    y = 0;
    while (x < n && y < n)
    {
        if (x == 0 && y == 0)
        {
            printf("%d ", a[x][y]);
            y++;
        }
        else if (x == 0 && y < n - 1)
        {
            scan2();
            x++;
        }
        else if (y == 0 && x < n - 1)
        {
            scan1();
            y++;
        }
        else if (x == 0 && y == n - 1)
        {
            scan2();
            y++;
        }
        else if (x == n - 1 && y == 0)
        {
            scan1();
            x++;
        }
        else if (x == n - 1 && y < n - 1)
        {
            scan1();
            x++;
        }
        else if (y == n - 1 && x < n - 1)
        {
            scan2();
            y++;
        }
        else if (x == n - 1 && y == n - 1)
        {
            printf("%d ", a[x][y]);
            break;
        }
    }
    return 0;
}
