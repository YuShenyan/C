#include <stdio.h>
int main()
{
    char str[1000]={'\0'};
    gets(str);
    int i ,j=0;
    for (j = 0; str[j] != '\0';j++)
    {
    }
    for (i = j - 1; i >= 0;i--)
    {
        printf("%c", str[i]);
        
    }
    return 0;
}