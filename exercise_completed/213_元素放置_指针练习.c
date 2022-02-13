//Date:2022/02/11 Friday
//Programme:213 元素放置——指针练习
//Descirtption:心有所向，日复一日，必有精进。
#include<stdio.h>
void place(int* a,int m,int n)
{
    int i, j,temp;
    for (i = 0; i < m*n;i++)
    {
        for (j = i+1; j < m * n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    for (i = 0; i < m;i++)
    {
        for (j = 0; j < n;j++)
        {
            if(j<n-j-1&&i%2==0)
            {
                temp = *(a + i * n + j);
                *(a + i * n + j) = *(a + i * n + (n - j - 1));
                *(a + i * n + (n - j - 1)) = temp;
            }
        }
    }
}
int main()
{
    int num[50],m,n,i,j;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m * n;i++)
    {
        scanf("%d", &num[i]);
    }
    place(&num[0],m,n);
    for (i = 0; i < m; i++)
        {for (j = 0; j < n; j++)
        {
            printf("%d ", num[i * n + j]);
        }
        printf("\n");
        }
            return 0;
    }