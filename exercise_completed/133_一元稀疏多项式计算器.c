// Date:2022/02/13 Sunday
// Programme:133_一元稀疏多项式计算器
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>

int main()
{
    int n, m, t, i, a, b, max = 0, output = 0, min = 0;//max记录最大指数,min记录最小指数,output记录输出情况
    scanf("%d%d%d", &n, &m, &t);
    int xishu[10000] = {}, xishu_1[10000] = {}; // xishu[]记录正指数对应的系数（指数为元素下标）;xishu_1[]记录负指数对应的系数（指数为元素下标取负）
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);//a为系数,b为指数
        if (b > max)
            max = b;

        if (b < min)
            min = b;

        if (b >= 0)//b为非负数存入xishu[b]
        {
            xishu[b] += a;
        }
        else
        {
            xishu_1[-b] += a;//b为负数存入xishu_1[-b]
        }
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &a, &b); // a为系数,b为指数
        if (b > max)
            max = b;

        if (b < min)
            min = b;

        if (t == 0)//t==0时做加法
        {
            if (b >= 0)//b为非负数存入xishu[b]
            {
                xishu[b] += a;
            }
            else // b为负数存入xishu_1[-b]
            {
                xishu_1[-b] += a;
            }
        }
        else//t==1时做减法
        {
            if (b >= 0) // b为非负数存入xishu[b]
            {
                xishu[b] -= a;
            }
            else // b为负数存入xishu_1[-b]
            {
                xishu_1[-b] -= a;
            }
        }
    }
    for (i = min; i < 0; i++)
    {
        if (xishu_1[-i] == 0) //系数为0跳过此项
            continue;
        if (xishu_1[-i] > 0 && output == 1) //在系数为正且存在输出的前提下才输出 "+"
            printf("+");
        if (xishu_1[-i] == 1)//系数为-1时输出-x^i
            printf("x^%d", i);
        else if (xishu_1[-i] == -1) //系数为1时输出x^i
            printf("-x^%d", i);
        else
            printf("%dx^%d", xishu_1[-i], i);
        output = 1;
    }
    i = 0;
    if (xishu[i] != 0) //系数为0跳过此项
    {
        printf("%d", xishu[i]);//指数为0,不需要输出x,输出系数即可
        output = 1;
    }
    i = 1;
    if (xishu[i] > 0 && output) //在系数为正且存在输出的前提下才输出 "+"
        printf("+");
    if (xishu[i] != 0)
    {
        if (xishu[i] == 1)
            printf("x");
        else if (xishu[i] == -1)
            printf("-x");
        else
            printf("%dx", xishu[i]);
        output = 1;
    }
    for (i = 2; i <= max; i++)
    {
        if (xishu[i] == 0) //系数为0跳过此项
            continue;
        if (xishu[i] > 0 && output == 1) //在系数为正且存在输出的前提下才输出 "+"
            printf("+");
        if (xishu[i] == 1)
            printf("x^%d", i);
        else if (xishu[i] == -1)
            printf("-x^%d", i);
        else
            printf("%dx^%d", xishu[i], i);
        output = 1;
    }
    return 0;
}
//网上查到的好几个都是用结构体写的,我觉得用我这种方法简单一点，参考了色块统计的方法
//程序主体应该还可以简化，不过我是先写了非负部分,后来发现存不了负指数,所以重新加了一块，显得比较臃肿
