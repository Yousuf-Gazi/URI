#include <stdio.h>

int main()
{
	float score, result, sum = 0;
	int i = 0;
	while (i < 2)
	{
		scanf("%f", &score);
		if (score >= 0 && score <= 10)
		{
			sum += score;
			i++;
		}
		else
		{
			printf("nota invalida\n");
		}
	}

	result = sum / 2;
	printf("media = %.2f\n", result);

	return 0;
}
