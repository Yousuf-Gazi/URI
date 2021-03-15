#include <stdio.h>

int main()
{
	float num, total = 0, average;
	int count = 0, i = 0;

	for (i = 0; i < 6; i++)
	{
		scanf("%f", &num);
		if (num > 0)
		{
			count++;
			total += num;
		}
	}

	average = total / count;

	printf("%d valores positivos\n", count);
	printf("%.1f\n", average);

	return 0;
}
