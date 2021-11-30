#include <stdio.h>
void fun(int x)
{
    printf("%d", x);
}
int main()
{
    int a;
    scanf("%x", &a);
    fun(a);
    return 0;
}