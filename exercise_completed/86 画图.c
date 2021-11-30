#include <stdio.h>
int main()
{
    int n, a[101][101]={0},x,y;
    scanf("%d", &n);
    int i,x1[100],y1[100],x2[100],y2[100];
    for (i = 0; i < n;i++)
    {
        scanf("%d%d%d%d", &x1[i],& y1[i], &x2[i], &y2[i]);
    }
    for (i = 0; i < n;i++)
    {
        for (x = x1[i]+1; x <= x2[i];x++)
        {
            for (y = y1[i]+1; y <= y2[i];y++)
            {
                a[x][y] = 1;
            }
        }
    }
    int ge=0;
    for (x = 0; x <= 100;x++)
    {
        for (y = 0; y <= 100;y++)
        {
            if(a[x][y]==1)
            {
                ge++;
            }
        }
    }
    printf("%d", ge);
    return 0;
}