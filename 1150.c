#include <stdio.h>

int main()
{
	int x, z, i, sum = 0, count = 1;
	scanf("%d %d", &x, &z);
	while (z <= x)
	{
		scanf("%d", &z);
	}
	for (i = x; i < z; i++)
	{
		sum += i;
		if (sum > z)
		{
			break;
		}
		count++;
	}

	printf("%d\n", count);

	return 0;
}
