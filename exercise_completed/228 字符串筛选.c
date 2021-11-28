#include <stdio.h>
char t[1000] = {'\0'}, str[1000] = {'\0'};
int c=0,i;
void fun(char a, int b)
{
    if (b % 2 == 0)
    {
        t[c] = a;
        c++;
    }
}
void print(){
    printf("%c", t[i]);
}
int main()
{
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        fun(str[i], i);
    }
    for (i = 0; i < c;i++)
    {
        print();
    }
    return 0;
}