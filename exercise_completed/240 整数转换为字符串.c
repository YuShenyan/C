// Date:2021/12/03 Friday
// Programme:240 整数转换为字符串
// Descirtption:加强刻晴！！！
#include <stdio.h>
void convert(int a)
{
    int b;
    if ((b = a / 10) != 0)
    {
        convert(b);
    }

    putchar(a % 10 + '0');
}
int main()
{
    int c;
    scanf("%d", &c);
    if (c < 0)
    {
        printf("-");
        c = -c;
    }
    convert(c);
    printf("\n");
    return 0;
}