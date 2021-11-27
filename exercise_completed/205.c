#include <stdio.h>
void tow(char x, int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", x);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    char x;
    scanf("%c %d", &x, &n);
    tow(x, n);
    return 0;
}