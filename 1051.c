#include <stdio.h>

int main()
{
	float tax, salary;
	scanf("%f", &salary);

	if (salary > 0.00 && salary < 2000.00)
	{
		printf("Isento\n");
	}
	else if (salary >= 2000.01 && salary <= 3000.00)
	{
		tax = (salary - 2000) * 0.08;
		printf("R$ %.2f\n", tax);
	}
	else if (salary >= 3000.01 && salary <= 4500.00)
	{
		tax = ((salary - 3000) * 0.18) + 80;
		printf("R$ %.2f\n", tax);
	}
	else if (salary > 4500.00)
	{
		tax = ((salary - 4500) * 0.28) + 270 + 80;
		printf("R$ %.2f\n", tax);
	}

	return 0;
}
