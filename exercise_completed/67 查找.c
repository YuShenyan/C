#include <stdio.h>
int main()
{
    int n, i, k, a[100], change = 0;
    scanf(" %d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("%d ", i);
            change = 1;
        }
    }
    if (change == 0)
        printf("-1");
    return 0;
}