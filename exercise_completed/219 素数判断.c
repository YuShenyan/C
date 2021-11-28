#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, truth = 0;
    scanf("%d", &n);
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            truth = 1;
            break;
        }
    }
    if (truth)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}