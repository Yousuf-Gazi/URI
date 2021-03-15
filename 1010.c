#include <stdio.h>

int main ()
{
	int code1, code2, unit1, unit2;
	float price1, price2, amount;
	scanf("%d %d %f", &code1, &unit1, &price1);
	scanf("%d %d %f", &code2, &unit2, &price2);

	amount = ((unit1 * price1) + (unit2 * price2));
	printf("VALOR A PAGAR: R$ %0.2f\n", amount);

	return 0;
}
