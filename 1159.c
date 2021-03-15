#include <stdio.h>

int main()
{
	int x, i, count, sum;
	while (1)
	{
		sum = 0;
		count = 0;
		scanf("%d", &x);
		if (x == 0)
		{
			break;
		}
		else
		{
			for (i = x; count < 5; i++)
			{
				if ((i % 2) == 0)
				{
					sum += i;
					count++;
				}
			}

			printf("%d\n", sum);
		}
	}

	return 0;
}
