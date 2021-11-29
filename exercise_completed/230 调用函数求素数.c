#include <stdio.h>
#include <math.h>
int x, b, i = 0, y[1000] = {0}, a;
int fun()
{
    for (a = 2; a <= x; a++)
    {
        for (b = 2; b <= sqrt((double)a); b++)
        {

            if (a % b == 0)
            {

                goto next;
            }
        }

        {
            y[i] = a;
            i++;
        }
    next:;
    }
    return i;
}
int main()
{
    scanf("%d", &x);
    fun();
    printf("%d\n", i);
    for (a = 0; a < i; a++)
    {
        printf("%d ", y[a]);
    }
}