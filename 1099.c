#include <stdio.h>

int main()
{
	int N, start, end, sum = 0, i, j;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		scanf("%d %d", &start, &end);
		if (start > end)
		{
			for (j = end + 1, sum = 0; j < start; j++)
			{
				if ((j % 2) == 1)
				{
					sum += j;
				}
			}
		}
		else if (start <= end)
		{
			for (j = start + 1, sum = 0; j < end; j++)
			{
				if ((j % 2) == 1)
				{
					sum += j;
				}
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}
