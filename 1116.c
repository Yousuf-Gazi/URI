#include <stdio.h>

int main()
{
	int x, y, n, i;
	float result;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		result = (float)x / y;
		if (y == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			printf("%.1f\n", result);
		}
	}

	return 0;
}
