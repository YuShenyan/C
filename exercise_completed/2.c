#include <stdio.h>

int main()
{
	int n, i, a, b, c = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a != b)
		{
			c++;
		}
		b = a;
	}
	printf("%d", c);
	return 0;
}