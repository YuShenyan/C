// Date:2022/02/09 Wednesday
// Programme:年月日
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
struct date
{
    int year;
    int month;
    int day;
} date1;

int main()
{
    scanf("%d,%d,%d", &date1.year, &date1.month, &date1.day);
    switch (date1.month)
    {
    case 12:
        date1.day += 30;
    case 11:
        date1.day += 31;
    case 10:
        date1.day += 30;
    case 9:
        date1.day += 31;
    case 8:
        date1.day += 31;
    case 7:
        date1.day += 30;
    case 6:
        date1.day += 31;
    case 5:
        date1.day += 30;
    case 4:
        date1.day += 31;
    case 3:
        if (date1.year % 400 == 0 ||( date1.year % 4 == 0 && date1.year % 100 != 0))
            date1.day += 29;
        else
            date1.day += 28;
    case 2:
        date1.day += 31;
    case 1:;
    }
    printf("%d", date1.day);
    return 0;
}