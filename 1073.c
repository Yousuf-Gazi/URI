#include <stdio.h>

int main()
{
	int N, i, square;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		if ((i % 2) == 0)
		{
			square = i * i;
			printf("%d^2 = %d\n", i, square);
		}
	}

	return 0;
}
