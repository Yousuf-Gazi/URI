#include <stdio.h>

int main()
{
	int N, num, i;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);

		if ((num % 2) == 1 && num > 0)
		{
			printf("ODD POSITIVE\n");
		}
		else if ((num % 2) == -1 && num < 0)
		{
			printf("ODD NEGATIVE\n");
		}
		else if ((num % 2) == 0 && num > 0)
		{
			printf("EVEN POSITIVE\n");
		}
		else if ((num % 2) == 0 && num < 0)
		{
			printf("EVEN NEGATIVE\n");
		}
		else if (num == 0)
		{
			printf("NULL\n");
		}
	}

	return 0;
}
