#include <stdio.h>

int main()
{
	int num, i = 0, count_even = 0, count_odd = 0, count_pos = 0, count_neg = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);

		if ((num % 2) == 0)
		{
			count_even++;
		}
		if ((num % 2) != 0)
		{
			count_odd++;
		}
		if (num > 0)
		{
			count_pos++;
		}
		if (num < 0)
		{
			count_neg++;
		}
	}

	printf("%d valor(es) par(es)\n", count_even);
	printf("%d valor(es) impar(es)\n", count_odd);
	printf("%d valor(es) positivo(s)\n", count_pos);
	printf("%d valor(es) negativo(s)\n", count_neg);

	return 0;
}
