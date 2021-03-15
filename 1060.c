#include <stdio.h>

int main()
{
	float num;
	int count = 0, i = 0;

	for (i = 0; i < 6; i++)
	{
		scanf("%f", &num);
		if (num > 0)
		{
			count++;
		}
	}

	printf("%d valores positivos\n", count);

	return 0;
}
