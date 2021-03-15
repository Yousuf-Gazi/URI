#include <stdio.h>

int main()
{
	int n, i, line = 0;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			for (i = 1; i <= n; i++)
			{
				printf("%d", i);
				line++;
				if (line == n)
				{
					printf("\n");
					line = 0;
				}
				else
				{
					printf(" ");
				}
			}
		}
	}

	return 0;
}
