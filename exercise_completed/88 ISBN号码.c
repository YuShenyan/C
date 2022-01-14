//Date:2022/01/14 Friday
//Programme:88 ISBN号码
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]={},c[20]={};
    gets(a);
    int b;
    b = ((a[0] - '0') * 1 + (a[2] - '0') * 2 + (a[3] - '0') * 3 + (a[4] - '0') * 4 + (a[6] - '0') * 5 + (a[7] - '0') * 6 + (a[8] - '0') * 7 + (a[9] - '0') * 8 + (a[10] - '0') * 9) % 11;
    switch (b)
    {
    case 1:if(a[12]=='1')
            printf("Right");
            else
            {
                strcpy(c, a);
                c[12] = '1';
                puts(c);
            }
                
            break;
    case 2:
        if (a[12] == '2')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '2';
            puts(c);
        }
        break;
    case 3:
        if (a[12] == '3')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '3';
            puts(c);
        }
        break;
    case 4:
        if (a[12] == '4')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '4';
            puts(c);
        }
        break;
    case 5:
        if (a[12] == '5')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '5';
            puts(c);
        }
        break;
    case 6:
        if (a[12] == '6')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '6';
            puts(c);
        }
        break;
    case 7:
        if (a[12] == '7')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] ='7' ;
            puts(c);
        }
        break;
    case 8:
        if (a[12] == '8')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '8';
            puts(c);
        }
        break;
    case 9:
        if (a[12] == '9')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = '9';
            puts(c);
        }
        break;
    case 10:
        if (a[12] == 'X')
            printf("Right");
        else
        {
            strcpy(c, a);
            c[12] = 'X';
            puts(c);
        }
        break;
    default:
        break;
    }
    return 0;
}