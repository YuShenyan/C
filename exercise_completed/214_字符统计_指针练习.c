// Date:2022/02/11 Friday
// Programme:214_字符统计_指针练习
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
void count(char *a)
{
    int i = 0;
    int num[5] = {};
    for (; *(a + i) != '\0' && i < 100; i++)
    {
        if (*(a + i) >= 'A' && *(a + i) <= 'Z')
        {
            num[0]++;
        }
        else if (*(a + i) >= 'a' && *(a + i) <= 'z')
        {
            num[1]++;
        }
        else if (*(a + i) == ' ')
        {
            num[2]++;
        }
        else if (*(a + i) >= '0' && *(a + 1) <= '9')
        {
            num[3]++;
        }
        else
        {
            num[4]++;
        }
    }
    printf("%d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
}
int main()
{
    char string[100] = {};
    gets(string);
    count(&string[0]);
    return 0;
}
//以下为原有代码，我不知道哪里有问题
//破案了，num[5]只有在count{}里定义才算对，我实在不能理解为什么要搞一个这样的标准
/*#include <stdio.h>
void count(char *a, int *b)
{
    int i = 0;
    for (; *(a + i) != '\0'&&i<100; i++)
    {
        if (*(a + i) >= 'A' && *(a + i) <= 'Z')
        {
            *b +=1;//不能直接用*b++，下面的同理,我推测是因为这么用会直接改变指针自身的值
        }
        else if (*(a + i) >= 'a' && *(a + i) <= 'z')
        {
            *(b + 1) += 1;
        }
        else if (*(a + i) == ' ')
        {
            *(b + 2) += 1;
        }
        else if (*(a + i) >= '0' && *(a + 1) <= '9')
        {
            *(b + 3) += 1;
        }
        else
        {
            *(b + 4) += 1;
        }
    }
}
int main()
{
    char string[100] = {};
    int num[5] = {};
    gets(string);
    count(&string[0],& num[0]);
    printf("%d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
    return 0;
}*/
