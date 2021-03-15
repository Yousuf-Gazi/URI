#include <stdio.h>

int main()
{
	int x, y, i, line = 0;
	scanf("%d %d", &x, &y);

	for (i = 1; i <= y; i++)
	{
		printf("%d", i);
		line++;
		if (line == x)
		{
			printf("\n");
			line = 0;
		}
		else
		{
			printf(" ");
		}
	}

	return 0;
}
