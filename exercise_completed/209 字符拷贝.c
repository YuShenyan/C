// Date:2021/12/25 Saturday
// Programme:209 字符拷贝
// Descirtption:加强刻晴！！！
#include <stdio.h>
#include <string.h>
void char_cp(char *a, int n, char *b)
{
    int i;
    char ch[50];
    for (i = 0; *(a+n + i+1) != '\0'; i++)
        ch[i] = *(a + n+i+1);
    ch[i] = '\0';
    for (i = 0; ch[i] != '\0'; i++)
        *(b + i) = ch[i];
    *(b + i) = '\0';
}
int main()
{
    char str[50], ch[50];
    gets(str);
    int n;
    scanf("%d", &n);
    char_cp(str, n, ch);
    puts(ch);
    return 0;
}