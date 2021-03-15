#include <stdio.h>

int main()
{
	int n, x, y, i, j, sum = 0, count = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		sum = 0;
		count = 0;
		for (j = x; count < y; j++)
		{
			if ((j % 2) != 0)
			{
				sum += j;
				count++;
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}
