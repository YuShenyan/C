#include<stdio.h>
int main(){
    int n,m,x,y,a[100][100];
    scanf("%d %d ", &n, &m);
    for (x = 0; x < n;x++)
    {
        for (y = 0; y < m;y++){
            scanf("%d", &a[x][y]);
        }
    }
    for (y = 0; y <m ;y++)
    {
        for (x = n - 1; x >= 0;x--)
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }
    return 0;
}
