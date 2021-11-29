#include <stdio.h>
char a[100] = {'\0'}, b[100] = {'\0'};
int i, j, k; //i和j分别为a[],b[]的长度
void fun(char c)
{
    printf("%c", c);
}
int main()
{
    gets(a);
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (j = 0; b[j] != '\0'; j++)
    {
    }
    for (k = 0; k < i; k++)
    {
        fun(a[k]);
    }
    for (k = i; k < i + j;k++)
    {
        fun(b[k - i]);
    }
    return 0;
}