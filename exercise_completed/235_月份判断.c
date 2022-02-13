// Date:2022/02/13 Sunday
// Programme:235_月份判断
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    
    if (month < 1 || month > 12)//别忘了这一步
    {
        printf("wrong");
    }
    else
    {
        char *en[12] =
            {
                "January",
                "February",
                "March",
                "April",
                "May",
                "June",
                "July",
                "August",
                "September",
                "Octobor",
                "November",
                "December"};
        printf("%s", en[month - 1]);
    }
    return 0;
}