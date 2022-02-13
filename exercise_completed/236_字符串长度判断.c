// Date:2022/02/13 Sunday
// Programme:236_字符串长度判断
// Descirtption:心有所向，日复一日，必有精进。
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    gets(string);
    int len = strlen(string);
    int *arr[] = {&len};
    printf("%d", *arr[0]);
    return 0;
}
//这也能过？？？？
//指针数组只有一个元素，而且完全没进行处理
//我很好奇标准答案是怎么做的
