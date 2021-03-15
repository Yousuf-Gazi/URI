#include <stdio.h>

int main()
{
	int alcohol = 0, gasoline = 0, diesel = 0, product_no;

	while (1)
	{
		scanf("%d", &product_no);
		if (product_no == 1)
		{
			alcohol++;
		}
		else if (product_no == 2)
		{
			gasoline++;
		}
		else if (product_no == 3)
		{
			diesel++;
		}
		else if (product_no == 4)
		{
			break;
		}
		else
		{
			continue;
		}
	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcohol);
	printf("Gasolina: %d\n", gasoline);
	printf("Diesel: %d\n", diesel);

	return 0;
}
