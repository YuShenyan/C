#include <stdio.h>
//b[]记录行数，c[]记录列数,d[]记录颜色种类，type记录颜色数量
int n, m, k, t, same, i, type = 0, x = 0, y = 0, a[20][20], d[50] = {0}, b[400] = {0}, c[400] = {0}, j = 0;
//向color()输入x,y color会比较a[x][y]与已有颜色的值，并统计颜色种类
void color(int x, int y)
{
    for (i = 0, same = 0; i < type; i++)
    {
        if (a[x][y] == d[i])
        {
            same = 1;
        }
    }
    //判断是否与已有颜色相同
    if (same == 0)
    {
        d[type] = a[x][y];
        type += 1;
    }
}
int main()
{
    scanf("%d %d %d %d", &n, &m, &t, &k); //n行数（n<20），m列数（m<20），t个矩形区域（0<t<50），k为其中某个区域的编号（1<=k<=t）。
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
        {
            if (a[x][y] == k)
            {
                j++;
                b[j] = x;
                c[j] = y;
            }
        }
    }
    //k所在的区域为a[b[1]][c[1]]~a[b[j]][c[j]]
    //上方区域(b[1]-1,c[1]~c[j])
    for (x = b[1] - 1, y = c[1]; y <= c[j] && x >= 0; y++)
    {
        color(x, y);
    }
    //下方区域(b[j]+1,c[1]~c[j])
    for (x = b[j] + 1, y = c[1]; y <= c[j] && x < n; y++)
    {
        color(x, y);
    }
    //左方区域(b[1]~b[j],c[1]-1)
    for (x = b[1], y = c[1] - 1; x <= b[j] && y >= 0; x++)
    {
        color(x, y);
    }
    //右方区域(b[1]~b[j],c[j]+1)
    for (x = b[1], y = c[j] + 1; x <= b[j] && y < m; x++)
    {
        color(x, y);
    }
    printf("%d", type);
    return 0;
}
