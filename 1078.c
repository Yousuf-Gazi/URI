#include <stdio.h>

int main()
{
	int N, i, product;
	scanf("%d", &N);

	for (i = 1; i <= 10; i++)
	{
		if (N > 1 && N < 1000)
		{
			product = i * N;
		}

		printf("%d x %d = %d\n", i, N, product);
	}

	return 0;
}
