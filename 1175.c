#include <stdio.h>

int main()
{
	int n[20], i, j, y;
	for (i = 19; i >= 0; i--)
	{
		scanf("%d", &y);
		n[i] = y;
	}
	for (j = 0; j < 20; j++)
	{
		printf("N[%d] = %d\n", j, n[j]);
	}

	return 0;
}
