#include <stdio.h>
#include <math.h>
int main()
{
    int temp, n, i, j, k, sum = 0, a[10] = {0}, b = 0;
    scanf("%d", &n); //输入的数为n
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    temp = n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 10;
        n /= 10;
    } //n是i位数
    for (j = 0; j < i + 1; j++)
    {
        for (k = 0; k < i - j - 1; k++)
        {
            a[j] *= 10;
        }
        b += a[j]; //b += a[j] * pow(10, i - j - 1);
    }
    if (b == temp)
    {
        while (b > 0)
        {
            sum += b % 10;
            b /= 10;
        }
        printf("%d", sum);
    }
    else
    {
        printf("no");
    }
    return 0;
}