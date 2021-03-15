#include <stdio.h>

int main()
{
	double score, result, sum = 0;
	int i = 0, new_cal;

	while (1)
	{
		sum = 0;
		i = 0;
		while (i < 2)
		{
			scanf("%lf", &score);
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
		printf("media = %.2lf\n", result);

		while (1)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &new_cal);

			if (new_cal == 1 || new_cal == 2)
			{
				break;
			}
			else
			{
				continue;
			}
		}
		
		if (new_cal == 2)
		{
			break;
		}
	}

	return 0;
}
