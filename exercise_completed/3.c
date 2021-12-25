
#include <stdio.h>

int main()
{
	int i, n, j, abs, min = 10000;
	scanf("%d", &n);
	int a[1000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				abs = a[j] - a[i];
			}
			else
			{
				abs = a[i] - a[j];
			}
			if (abs < min)
			{
				min = abs;
				//printf("a[%d]=%d a[%d]=%d,%d;", i, a[i], j, a[j], min);
			}
		}
	}
	printf("%d", min);
	return 0;
}
