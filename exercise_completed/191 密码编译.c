// Date:2021/12/07 Tuesday
// Programme:191 密码编译
// Descirtption:加强刻晴！！！
#include <stdio.h>

int main()
{
    char password[8] = {'\0'};
    int i;
    gets(password);
    for (i = 0; i < 7; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            password[i] = 26 - (password[i] - 96) + 97;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            password[i] = 26 - (password[i] - 64) + 65;
        }
    }
    for (i = 0; i < 7; i++)
    {
        printf("%c", password[i]);
    }
        return 0;
}