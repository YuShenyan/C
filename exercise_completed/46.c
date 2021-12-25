#include <stdio.h>

int main()
{
	int n, i, a[100], ge = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n - 1; i++)
	{
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
		{
			ge++;
			//printf("%d\n", a[i]);
		}
	}
	printf("%d", ge);
	return 0;
}