#include <stdio.h>

int main()
{
	int n, x, i, j, check;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		check = 0;
		scanf("%d", &x);
		for (j = 1; j <= x; j++)
		{
			if ((x % j) == 0)
			{
				check++;
			}
		}
		
		if (check == 2)
		{
			printf("%d eh primo\n", x);
		}
		else
		{
			printf("%d nao eh primo\n", x);
		}
	}

	return 0;
}
